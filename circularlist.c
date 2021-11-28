#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node 
{
    int  data;
    struct node *next;
};
void traversal(struct node *head)
{
    struct node * ptr=head;
    do{
    printf("%d\n",ptr->data);
    ptr=ptr->next;
    }
    while (ptr!=head);
    
}
/* struct node * insertionatfirst(struct node *head,int value)
{
    struct node *item=(struct node *)malloc(sizeof(struct node));
    item->data=value;
    struct node *ptr=head->next;
    while (ptr!=head)
    {
        ptr=ptr->next;
    }
    ptr->next=item;
    item->next=head;
    head=item;
  return head;
} */
struct node * insert_at_end(struct node *head,int va)
{
    struct node * item=(struct node *)malloc(sizeof(struct node));
    item->data=va;
    struct node * ptr=head->next;
    while(ptr->next!=head)
    {
        ptr=ptr->next;
    }
    ptr->next=item;
    item->next=head;
    return head;
}
int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));
    head->data=20;
    head->next=second;
    second->data=30;
    second->next=third;
    third->data=50;
    third->next=head;
  /*   head=insertionatfirst(head,5);
    traversal(head); */
    head=insert_at_end(head,3);
    traversal(head);
}