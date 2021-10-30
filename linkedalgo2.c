#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    int data;
    struct node *next;

};
int main()
{
    struct node *start=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));
    struct node *forth=(struct node *)malloc(sizeof(struct node));
    start->data=1;
    start->next=second;
    second->data=4;
      second->next=third;
    third->data=6;
      third->next=forth;
    forth->data=8;
      forth->next=NULL;
      start=start->next;
struct node *ptr=(struct node*)malloc(sizeof(struct node));
struct node *p;
ptr->data=9;
ptr->next=NULL;
p=start;
while (p->next!=NULL)
{
    printf("%d",p->data);
    p=p->next;
}

}