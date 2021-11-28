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
    head->data=12;
    head->next=second;
    second->data=22;
    second->next=third;
    third->data=34;
    third->next=NULL;
    struct node *element=(struct node *)malloc(sizeof(struct node));
    struct node *p;
    int num;
    printf("enter the data;\n");
    scanf("%d",&num);
    element->data=num;
    // inserting node after element:\n
  /*   element->data=50;
    element->next=third;
    second->next=element;
    while (head!=NULL)
    {
        printf("%d\n",head->data);
        head=head->next;
    }
     */
    // inserting node at the begnning
   /*  element->next=head;
    while (element!=NULL)
    {
        printf("%d\n",element->data);
        element=element->next;
    } */
    // insert at last
   /*  third->next=element;
    element->next=NULL;
    while (head!=NULL)
    {
        printf("%d\n",head->data);
        head=head->next;
    } */
    p=head;
    int ind;
    printf("enter the index after that you want to insert:\n");
    scanf("%d",&ind);
    int i=0;
    while (i!=ind-1)
    {
       p=p->next;
       i++;
    }
    element->next=p->next;
    p->next=element;
    while (head!=NULL)
    {
        printf("%d\n",head->data);
        head=head->next;
    }
    
    

    

}