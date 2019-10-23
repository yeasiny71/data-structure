#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
typedef struct node node;
node *head;

void createList(int n);
void insertNodeAtMiddle(int data, int position);
void displayList();

int main()
{
    int n, data, position;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);

    printf("\nData in the list \n");
    displayList();

    printf("nEnter data to insert at middle of the list: ");
    scanf("%d", &data);
    printf("Enter the position to insert new node: " );
    scanf("%d", &position);
    insertNodeAtMiddle(data, position);

    printf("\nData in the list \n");
    displayList();

    return 0;
}
void createList(int n)
{
    node *newNode, *temp;
    int data, i;

    head = (node *)malloc(sizeof(node));

    printf("Enter the data of node 1: ");
    scanf("%d", &data);

    head->data = data;
    head->next = NULL;

    temp = head;
        for(i=2; i<=n; i++)
        {
            newNode = (node *)malloc(sizeof(node));
            printf("Enter the data of node %d: ", i);
            scanf("%d", &data);
            newNode->data = data;
            newNode->next = NULL;

            temp->next = newNode;
            temp = temp->next;

        }

        printf("SINGLY LINKED LIST CREATED SUCCESSFULLY\n");

}
void insertNodeAtMiddle(int data, int position)
{
    int i;
    node *newNode, *temp;

    newNode = (node*)malloc(sizeof(node));

    newNode->data = data;
    newNode->next = NULL;

    temp = head;
    for(i=2; i<=position-1; i++)
      {
       temp = temp->next;

        if(temp == NULL)
        break;
        }

        if(temp != NULL)
        {

            newNode->next = temp->next;
            temp->next = newNode;
            printf("DATA INSERTED SUCCESSFULLY\n");
        }
        else
        {
            printf("UNABLE TO INSERT DATA AT THE GIVEN POSITION\n");
        }

}
void displayList()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data);
            temp = temp->next;
        }
    }
}


