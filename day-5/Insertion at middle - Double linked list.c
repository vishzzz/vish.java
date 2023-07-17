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
void insertmid(struct node **head,int pos,int data)
{   
    struct node *new=malloc(sizeof(struct node));
    new->data=data;
    new->prev=NULL;
    new->next=NULL;
    struct node *temp=malloc(sizeof(struct node));
    temp=*head;
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    temp->next->prev=new;
    new->next=temp->next;
    temp->next=new;
    new->prev=temp;
    
    
    
}
int main()
{
    int pos,data;
    printf("\n Insertion at the beginning");
    struct node *head=malloc(sizeof(struct node));
    head->data=10;
    head->prev=NULL;
    head->next=NULL;
    insert(&head,20);
    insert(&head,30);
    insert(&head,40);
    insert(&head,50);
    insert(&head,60);
    printf("\n Enter the position\n");
    scanf("%d",&pos);
    printf("Enter the data\n");
    scanf("%d",&data);
    insertmid(&head,pos,data);
    struct node *temp=malloc(sizeof(struct node));
    temp=head;
    while(temp!=NULL)
    {
        printf("\n %d",temp->data);
        temp=temp->next;
    }
    return 0;
}
