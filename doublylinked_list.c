#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
void traverse(struct node *head)
{
    struct node *ptr = head;
    printf("list in forward direction\n");
    while (ptr!= NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
/* struct node * insert_at_first(struct node * head,int item)
{
    struct node * new=(struct node *)malloc(sizeof(struct node));
    new->data=item;
    struct node * ptr =head;
    new->prev=NULL;
    ptr->prev=new;
    new->next=ptr;
    head=new;
    return head;

} */

/* struct node * insert_at_last(struct node * head,int item)
{
    struct node * new=(struct node *)malloc(sizeof(struct node));
    new->data=item;
    new->next=NULL;
    struct node * ptr=head;
    while (ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=new;
    new->prev=ptr;
    new=head;
    return head;
    
} */

/* struct node * insert_at_index(struct node * head ,int item,int index)
{
    struct node * ptr=head;
    struct node * new=(struct node *)malloc(sizeof(struct node));
    new->data=item;
    int i=0;
    while (i!=index-1)
    {
        ptr=ptr->next;
        i++;
    }
    new->next=ptr->next;
    ptr->next=new;
    new->prev=ptr;

    return head;
    
} */
struct node * delete_from_last(struct node * head)
{
    struct node * ptr=head;
    struct node * p;
    while (ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    int temp;
    temp=ptr->data;
    ptr->prev->next=NULL;
    ptr=head;
    return head;
}
int main()
{
    struct node *start = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *forth = (struct node *)malloc(sizeof(struct node));

    start->data = 12;
     start->prev = NULL;
    start->next = second;
     second->prev = start;
    second->data = 10;
    second->next = third;
    third->data = 22;
    third->prev = second;
    third->next = forth;
    forth->data = 30;
     forth->prev = third;
    forth->next = NULL;
    /* start=insert_at_first(start,50); */
    int items,index;
   /*  printf("enter the item that you want to insert at last:\n");
    scanf("%d",&items); */
    printf("enter the index where you want to insert:\n");
    scanf("%d",&index);
   /*  start=insert_at_last(start,items); */
 /*  start= insert_at_index(start,items,index); */
 start=delete_from_last(start);
    traverse(start);
}