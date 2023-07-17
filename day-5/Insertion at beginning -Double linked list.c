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
    new->next=*head;
    (*head)->prev=new;
    *head=new;
}
int main()
{
    printf("\n Insertion at the beginning");
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
