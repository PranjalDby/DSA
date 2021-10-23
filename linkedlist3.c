#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *forth;
    struct node *five;
     struct node *point;
 /* struct node *ptrs;
    ptrs=(struct node *)malloc(sizeof(struct node));
    ptrs=head;
    ptrs->data=head->data;
    ptrs->next=second;
    printf("%d",ptrs->data); */
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    forth=(struct node *)malloc(sizeof(struct node));
    five=(struct node *)malloc(sizeof(struct node));
    point=(struct node*)malloc(sizeof(struct node));
    head->data=3;
    head->next=second;
    second->data=22;
    second->next=third;
    third->data=33;
    third->next=forth;
    forth->data=12;
    forth->next=five;
    five->data=4;
    five->next=NULL;
    head=point;
    point->data=23;
    point->next=second;
    

    struct node *s;
    s=head;
    while (s!=NULL)
    {
        printf("%d\n",s->data);
        s=s->next;
    }
    
    
}