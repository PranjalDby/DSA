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
    struct node *start=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));
    struct node *forth=(struct node *)malloc(sizeof(struct node));
    start->data=23;
    start->next=second;
    second->data=33;
    second->next=third;
    third->data=30;
    third->next=forth;
    forth->data=12;
    forth->next=NULL;
    // add thr element at first
    if(start->next==NULL){
        printf("null");
    }
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    // ptr=start;
    ptr->data=2;
    ptr->next=start;
    struct node *s;
    s=ptr;
    while (s!=NULL)
    {
        printf("%d\n",s->data);
        s=s->next;
    }
    
    
} 