#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    int data;
    struct node * next;
};
struct node * insert_at_first(struct node * head,int datas)
{
    struct node * ptr=head;
    ptr=ptr->next;
    struct node * new=(struct node *)malloc(sizeof(struct node));
    new->data=datas;
    while (ptr->next!=head)
    {
        ptr=ptr->next;
    }
    ptr->next=new;
    new->next=head;
    head=new;
    return head;
    
}
struct node * insert_at_last(struct node * head,int data)
{
    struct node * new=(struct node *)malloc(sizeof(struct node));
    new->data=data;
    struct node * ptr=head;
    ptr=ptr->next;
    while (ptr->next!=head)
    {
        ptr=ptr->next;
    }
    new->next=head;
    ptr->next=new;
    new=head;
    return head;
    
}
void display(struct node * head)
{
    struct node * ptr=head;
    while (ptr->next!=head)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    printf("%d",ptr->data);
    
}
int main()
{
    struct node * head=(struct node *)malloc(sizeof(struct node));
    struct node * first=(struct node *)malloc(sizeof(struct node));
    struct node * second=(struct node *)malloc(sizeof(struct node));
    struct node * third=(struct node *)malloc(sizeof(struct node));
    head->data=24;
    head->next=first;
    first->data=12;
    first->next=second;
    second->data=3;
    second->next=third;
    third->data=45;
    third->next=head;
  head= insert_at_last(head,100);
   display(head);

}