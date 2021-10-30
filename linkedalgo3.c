#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int data;
    struct node *next;
};
struct node *after(struct node *head,int data,int index)
{
    struct node *new=(struct node *)malloc(sizeof(struct node));
    struct node *p;
    int i=0;
    p=head;
    new->data=data;
    while(i!=index-1)
    {
       p=p->next;
       i++;
    }new->next=p->next;
    p->next=new;
    return head;
};
struct node *travesal(struct node *head)
{
    struct node *p;
    p=head;
    while(p->next!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
}
int main()
{

      struct node *head=(struct node *) malloc(sizeof(struct node));
      struct node *third=(struct node *) malloc(sizeof(struct node));
      struct node *last=(struct node *) malloc(sizeof(struct node));
      head->data=2;
      head->next=third;
      third->data=4;
      third->next=last;
      last->data=6;
      last->next=NULL;
      head=after(head,33,4);
      travesal(head);
      


}