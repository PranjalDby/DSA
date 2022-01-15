#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    int data;
    struct node *next, *prev;
};
struct node *insert(struct node *start, int index)
{
    int data, i = 0;
    printf("enter the val:\n");
    scanf("%d", &data);
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    struct node *ptr = start;
    while (i != index - 1)
    {
        i++;
         ptr = ptr->next;
    }
    new->next = ptr->next;
    ptr->next=new;
    new->prev = ptr; 
    new=start;
    return start;
}
struct node * delete(struct node * start)
{
    int index ,i=0;
    printf("enter the index:\n");
    scanf("%d",&index);
    struct node * ptr =start;
    while (i!=index-1)
    {
        i++;
        ptr=ptr->next;
    }
    struct node * p=ptr;
    ptr=ptr->next;
    ptr->prev=p;
    p->next=ptr->next;
    free(ptr);
   p=start;
    return start;
    
}
void display(struct node *start)
{
  struct node * ptr =start;
  while (ptr!=NULL)
  {
      printf("%d\n",ptr->data);
      ptr=ptr->next;
  }
  
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *forth = (struct node *)malloc(sizeof(struct node));
    head->data = 22;
    head->next = second;
    head->prev = NULL;
    second->data = 40;
    second->next = third;
    second->prev = head;
    third->data = 78;
    third->next = forth;
    third->prev = second;
    forth->data = 12;
    forth->next = NULL;
    forth->prev = third;
    int index,opt;
    do
    {
        printf("1 for insert an element :\n");
        printf("2 for insert an element :\n");
        printf("3 for insert an element :\n");
        printf("enter you option:\n");
        scanf("%d",&opt);
        switch (opt)
        {
        case 1:
        printf("enter the index:\n");
        scanf("%d",&index);
        head=insert(head,index);
        break;
        case 2:
        head=delete(head);
        break;
        case 3:
        display(head);
        }
    }while(opt!=4);
}