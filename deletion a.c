#include<stdlib.h>
struct node{
            int data;
            struct node *next;
};
typedef struct node node;
node *head;

int main()
{
    createlist(10);
    addatbeg(20);
    addatbeg(40);
    addatbeg(50);
    printlist();
    deleteFirstNode();
    printlist();
    return 0;
}
void createlist(int x)
{
    node *n=(node *)malloc(sizeof(node));
    n->data=x;
    n->next=NULL;
     if(head==NULL)
        head=n;
}
void addatbeg(int x)
{
    node *n=(node *)malloc(sizeof(node));
    n->data=x;
    n->next=head;
    head=n;
}

void printlist()
{
    node *n=head;
    while(n!=NULL)
    {
        printf("%d ",n->data);
        n=n->next;
    }
}
void deleteFirstNode()
{
    struct node *toDelete;

    if(head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        toDelete = head;
        head = head->next;

        printf("\nData deleted = %d\n", toDelete->data);
        free(toDelete);

        printf("SUCCESSFULLY DELETED FIRST NODE FROM LIST\n");
    }
}

