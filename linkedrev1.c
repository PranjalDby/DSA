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
struct node * insert_at_index(struct node * head)
{
    int index,val,i=0;
    printf("enter the value:\n");
    scanf("%d",&val);
    printf("enter the index where you want to insert value:\n");
    scanf("%d",&index);
    struct node * new=(struct  node *)malloc(sizeof(struct node));
    new->data=val;
    struct node * ptr=head;
    while(i!=index-1)
    {
        ptr=ptr->next;
        i++;
    }
    new->next=ptr->next;
    ptr->next=new;
    return head;

}
int main()
{
    struct node * head=(struct node *)malloc(sizeof(struct node));
    struct node * second=(struct node *)malloc(sizeof(struct node));
    struct node * third=(struct node *)malloc(sizeof(struct node));
    struct node * forth=(struct node *)malloc(sizeof(struct node));
    struct node * fifth=(struct node *)malloc(sizeof(struct node));
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
/*  p=insert_at_last(head); */
p=insert_at_index(head);
    insert(p);


}