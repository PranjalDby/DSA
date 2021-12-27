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
struct queue * ptr;
struct queue * new_queue(struct queue * p)
{
    p=(struct queue *)malloc(sizeof(struct queue));
    p->front=NULL;
    p->rear=NULL;
    return p;
}
struct queue * insert(struct queue * q,int val)
{

}
int main()
{
  new_queue(ptr);
    int opt,val,del;
    do
    {
        printf("1 for insert:\n");
        printf("2 for peek:\n");
        printf("option:\n");
        scanf("%d",&opt);
        switch (opt)
        {
        case 1:
        printf("enter val:\n");
        scanf("%d",&val);
        insert(ptr,val);
        break;
        case 2:
        del=peek();
        printf("%d\n",del);
        break;
        }
    } while (opt!=4);
    
}