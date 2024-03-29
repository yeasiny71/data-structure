#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
typedef struct node node;
node *head;

void createList(int n);
void insertNodeAtEnd(int data);
void displayList();

int main()
{
    int n, data;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);

    printf("\nData in the list \n");
    displayList();

    printf("\nEnter data to insert at end of the list: ");
    scanf("%d", &data);
    insertNodeAtEnd(data);

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

void insertNodeAtEnd(int data)
{
    node *newNode, *temp;

    newNode = (node *)malloc(sizeof(node));

    newNode->data = data;
    newNode->next = NULL;

    temp = head;
      while(temp->next != NULL)
           {
             temp = temp->next;
           }

        temp->next = newNode;

        printf("DATA INSERTED SUCCESSFULLY\n");

}
void displayList()
{
    node *temp;

   temp = head;
   while(temp != NULL)
        {
            printf("Data = %d\n", temp->data);
            temp = temp->next;
        }
}
