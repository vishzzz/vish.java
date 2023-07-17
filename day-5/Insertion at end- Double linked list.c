#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
void insert(struct node **head,int data)
{
    struct node *new=malloc(sizeof(struct node));
    new->data=data;
    new->prev=NULL;
    new->next=NULL;
    struct node *temp=malloc(sizeof(struct node));
    temp=*head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new;
    new->prev=temp;
}
int main()
{
    printf("\n Insertion at the end");
    struct node *head=malloc(sizeof(struct node));
    head->data=10;
    head->prev=NULL;
    head->next=NULL;
    insert(&head,20);
    insert(&head,30);
    insert(&head,40);
    struct node *temp=malloc(sizeof(struct node));
    temp=head;
    while(temp!=NULL)
    {
        printf("\n %d",temp->data);
        temp=temp->next;
    }
    return 0;
}
