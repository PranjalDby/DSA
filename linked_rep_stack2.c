#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int data;
    struct node * next;
};
struct node * top=NULL;
struct node * insert(struct node * tp,int size)
{
    int i;
    struct node * new=(struct node *)malloc(sizeof(struct node));
    for(i=0;i<size;i++)
    {
    if (tp==NULL)
    {
        new->data=i;
        new=new->next;
        tp=new;
    }
    else
    {
        struct node * ptr=tp;
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr=new;
        tp=new;
        return tp;
    }
}
}
void display(struct node * tp)
{
    struct node * p=tp;
    while (p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
    
}
int main()
{
    top=insert(top,5);
    display(top);
}