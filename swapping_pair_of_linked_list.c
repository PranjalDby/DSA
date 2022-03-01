#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    struct node * next;
    int data;
};
void swap(int *,int *);
void swappair(struct node * head)
{
    struct node * ptr=head;
    while (ptr!=NULL&&ptr->next!=NULL)
    {
        swap(&ptr->data,&ptr->next->data);
        ptr=ptr->next->next;
    }
    
}
void swap(int * a,int * b)
{
    int temp;
    temp= *a;
    *a=*b;
    *b=temp;
}

struct node * push(struct node ** head,int data)
{
    struct node * new=(struct node *)malloc(sizeof(struct node));
    new->data=data;
    new->next=(*head);
    *(head)=new;
}
void display(struct node * head)
{
    while (head!=NULL)
    {
        printf("%d\n",head->data);
        head=head->next;
    }
    
}
int main()
{
    struct node * head=NULL;
    push(&head,5);
    push(&head,4);
    push(&head,3);
    push(&head,2);
    push(&head,1);
    swappair(head);
    display(head);

}