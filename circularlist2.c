#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int data;
    struct node * next;
};
void traversal(struct node * start)
{
    struct node *ptr = start;
    do
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    } while (ptr!=start);
    
}
/* struct node * insert_at_first(struct node *start,int item)
{
  struct node * nodes=(struct node *)malloc(sizeof(struct node));
  nodes->data=item;
  struct node *ptr=start->next;
  while (ptr!=start)
  {
      ptr=ptr->next;
  }
  ptr->next=nodes;
  nodes->next=start;
  start=nodes;
  return start;
  
} */
/* struct node * insert_at_end(struct node *head,int num)
{
    struct node * nodes=(struct node *)malloc(sizeof(struct node));
  nodes->data=num;
  struct node * ptr=head->next;
  while (ptr->next!=head)
  {
      ptr=ptr->next;
  }
  ptr->next=nodes;
  nodes->next=head;
  return head;
  
} */
/* struct node * insert_at_index(struct node * head,int index,int item)
{
    struct node * new=(struct node *)malloc(sizeof(struct node));
    new->data=item;
    struct node * ptr=head;
    int i=0;
    while (i!=index-1)
    {
        i++;
        ptr=ptr->next;
    }
    new->next=ptr->next;
    ptr->next=new;
    return head;
    
} */


int main()
{
    struct node *start=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));
    struct node *last=(struct node *)malloc(sizeof(struct node));
    start->data=12;
    start->next=second;
    second->data=10;
    second->next=third;
    third->data=11;
    third->next=last;
    last->data=22;
    last->next=start;
   /*  start=insert_at_first(start,40);
    traversal(start); */
    // start=insert_at_end(start,30);
    int index,item;
    /* printf("enter the index where you want to insert an item:\n");
    scanf("%d",&index);
    printf("enter the  item:\n");
    scanf("%d",&item);
    start=insert_at_index(start,index,item); */
    traversal(start);
    
}