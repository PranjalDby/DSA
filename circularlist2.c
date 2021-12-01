#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int data;
    struct node * next;
};

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
    last->next=NULL;
    //insert at first
    struct node *new=(struct node *)malloc(sizeof(struct node));
    int val;
    printf("enter the value of element:\n");
    scanf("%d",&val);
    new->data=val;
    struct node *p=start;
   /*  new->next=start;
    p=new;
    while (p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    } */
    //insert at end
    while (p!=NULL)
    {
        p=p->next;
    }
    
    
    
    

    

}