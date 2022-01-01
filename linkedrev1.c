#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node 
{
    int data;
    struct node * next; 
};
void insert(struct node * start)
{
    struct node * ptr;
    ptr=start;
    while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    
}
struct node * insert_at_first(struct node * start)
{
    int val;
    printf("enter the value:\n");
    scanf("%d",&val);
    struct node * ptr=start;
    ptr=start;
    struct node * new=(struct node *)malloc(sizeof(struct node));
    new->data=val;
    new->next=ptr;
    ptr=new;
    return ptr;
}
struct node * insert_at_last(struct node * start)
{
    struct node * ptr=start;
    if(ptr==NULL)
    {
        printf("list is empty:\n");
    }
    int node;
    printf("enter the node that you want to insert_at_last:\n");
    scanf("%d",&node);
    struct node * new=(struct node *)malloc(sizeof(struct node));
    new->data=node;
    while (ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=new;
    new->next=NULL;
    return start;
    
}
int main()
{
    struct node * head=(struct node *)malloc(sizeof(int));
    struct node * second=(struct node *)malloc(sizeof(int));
    struct node * third=(struct node *)malloc(sizeof(int));
    struct node * forth=(struct node *)malloc(sizeof(int));
    struct node * fifth=(struct node *)malloc(sizeof(int));
    head->data=12;
    head->next=second;
    second->data=33;
    second->next=third;
    third->data=23;
    third->next=forth;
    forth->data=11;
    forth->next=fifth;
    fifth->data=10;
    fifth->next=NULL;
    printf("list befor insertion:\n");
    insert(head);
    struct node * p=head;
 /*    p=insert_at_first(head); */
 p=insert_at_last(head);
    insert(p);


}