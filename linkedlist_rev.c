#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct list 
{
    int data;
    struct list *next;
};
struct list * insertend(struct list *start,int datas)
{
    if(start==NULL)
    {
        printf("no memory");
    }
    struct list *ptr=(struct list *)malloc(sizeof(struct list));
    ptr->data=datas;
    struct list *node;
    node=start;
    while (node->next!=NULL)
    {
       node=node->next;
    }
    node->next=ptr;
    ptr->next=NULL;
    return start;
};  
struct list * traversal(struct list *starts)
{
    struct list *p;
    p=starts;
    while(p!=NULL)
    {
        printf("new%d\n",p->data);
        p=p->next;
    }
};
int main()
{
    struct list *start=(struct list *)malloc(sizeof(struct list));
    struct list *second=(struct list *)malloc(sizeof(struct list));
    struct list *third=(struct list *)malloc(sizeof(struct list));
    // struct list *last=(struct list *)malloc(sizeof(struct list));

    start->data=12;
    start->next=second;
    second->data=33;
    second->next=third;
    third->data=3;
    third->next=NULL;
    // insert_at_first(start,data);
    // start=insert_at_between(start,2,3);
   start=insertend(start,22);
   traversal(start);

}