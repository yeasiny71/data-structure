#include<stdio.h>
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
    addatbeg(400);
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

