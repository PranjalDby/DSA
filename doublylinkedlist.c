#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    struct node * prev,* next;
    int data;
};
struct node * insert_at_first(struct node * start)
{
    struct node * ptr=start;
    struct node * new=(struct node *)malloc(sizeof(struct node));
    new->data=9;
    new->next=ptr;
    new->prev=NULL;
    ptr->prev=new;
    start=new;
    return start;
}
struct node * delete_first(struct node * head)
{
    struct node * ptr=head;
    struct node * d=(struct node *)malloc(sizeof(struct node));
    d->data=ptr->data;
    ptr=ptr->next;
    ptr->prev=NULL;
    free(d);
    head=ptr;
    return head;

}
struct node * delete_at_last(struct node * head){
    struct node * ptr=head;
    struct node * new=(struct node *)malloc(sizeof(struct node));
    while (ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    new=ptr->next;
    ptr->prev=ptr->prev;
    ptr->next=NULL;
    free(new);
    return head;

    
}
void display(struct node * head){
    struct node * ptr=head;
    struct node * new;
    while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    
}
int main()
{
  struct node * head=(struct node *)malloc(sizeof(struct node));  
  struct node * second=(struct node *)malloc(sizeof(struct node));  
  struct node * third=(struct node *)malloc(sizeof(struct node));  
  struct node * forth=(struct node *)malloc(sizeof(struct node));
  head->data=34;
  head->prev=NULL;
  head->next=second;
  second->data=31;
  second->next=third;
  second->prev=head;
  third->data=12;
  third->next=forth;
  third->prev=second;
  forth->data=10;
  forth->next=NULL;
  forth->prev=third;
//  head= insert_at_first(head);
//  head=delete_first(head);
 head=delete_at_last(head);
 display(head);
  

}