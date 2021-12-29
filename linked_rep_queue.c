#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node 
{
    int data;
    struct node * next;
};
struct queue 
{
    struct node * front;
    struct node * rear;
};
struct queue * new_queue(struct queue * p)
{
    p=(struct queue *)malloc(sizeof(struct queue));
    p->front=NULL;
    p->rear=NULL;
    return p;
}
struct node * newnode(int k)
{
    struct node * n=(struct node * )malloc(sizeof(struct node));
    n->data=k;
    n->next=NULL;
    return n;
}
struct queue * insert(struct queue * q,int val)
{
    struct node * new=newnode(val);
    if (q->front==NULL&&q->rear==NULL)
    {
        q->front=q->rear=new;
    }
    else
    {
        q->rear->next=new;
        q->rear=new;
    }
}
int peek(struct queue * s)
{
    if(s->front==NULL&&s->rear==NULL)
    {
        printf("enmpty:\n");
    }
    else
    {
        return s->front->data;
    }
}
int main()
{
    struct queue * ptr;
  new_queue(ptr);
    int opt,val,del;
    
    
        printf("1 for insert:\n");
        printf("2 for peek:\n");
        printf("3 for exit:\n");
        
        printf("enter val:\n");
        scanf("%d",&val);
        insert(ptr,33);
        printf("%d is queue front:\n",ptr->front->data);
        
    
}