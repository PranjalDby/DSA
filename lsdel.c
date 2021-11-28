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
    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));
    struct node *forth=(struct node *)malloc(sizeof(struct node));
    head->data=12;
    head->next=second;
    second->data=22;
    second->next=third;
    third->data=30;
    third->next=forth;
    forth->data=20;
    forth->next=NULL;
    // delete the first
    struct node * ptr=head;
    struct node *p;
   /*  head=head->next;
    free(ptr);
    while (head!=NULL)
    {
        printf("%d\n",head->data);
        head=head->next;
    } */
    /* int index;
    index=2;
   int i=0;
    while (i!=index-1)
    {
        ptr=ptr->next;
        i++;
    }
    struct node *p=ptr->next;
    ptr->next=p->next;
    free(p);
    while (head!=NULL)
    {
        printf("%d\n",head->data);
        head=head->next;
    } */
    while (ptr->next!=NULL)
    {
           p=ptr;
        ptr=ptr->next;
    }
    p->next=NULL;
    free(ptr);
    while (head!=NULL)
    {
           printf("%d\n",head->data);
        head=head->next;
    }
    
    
    
    
    
   
    
    
    
    
    
    

}