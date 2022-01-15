#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    int data;
    struct node *next;
};
//circular list;
//insertion in circular list
struct node *insert(struct node *start)
{
    int data[10], i;
    printf("eneter the data:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &data[i]);
    }
    for (i = 0; i < 5; i++)
    {
        struct node *new = (struct node *)malloc(sizeof(struct node)), *ptr;
        new->data = data[i];
        if (start == NULL)
        {
            new->next = new;
            start = new;
        }
        else
        {
            ptr = start;
            while (ptr->next !=start)
            {
                ptr = ptr->next;
            }
            ptr->next = new;
            new->next = start;
        }
    }
    return start;
}
struct node * delete(struct node * head)
{
    int index;
    printf("enter the index:\n");
    scanf("%d",&index);
    int i=0;
    struct node * ptr= head;
    struct node * p;
    while (i!=index-1)
    {
        ptr=ptr->next;
        i++;
    }
  int item =ptr->data;
  head=ptr;
  return head;
}
void display(struct node *start)
{
    struct node *p = start;
    while (p->next != start)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head = NULL;
    head = insert(head);
    head=delete(head);
    display(head);
}
