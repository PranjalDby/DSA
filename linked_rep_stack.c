#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    struct node *next;
    int data;
};
struct node *top;
/* void create(struct node *tp)
{
    tp = NULL;
} */
struct node *insert(struct node *ptr)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    int i;
    for (i = 0; i < 6; i++)
    {
        ptr=new;
        new->data=i;
        ptr->next=new->next;
        new->next=NULL;

    }
    return ptr;
}
void display(struct node * ptr)
{
    while (ptr!=NULL)
    {
        printf("top:%d\n",ptr->data);
        ptr=ptr->next;
    }
    
}
int main()
{
   top = insert(top);
    display(top);
}