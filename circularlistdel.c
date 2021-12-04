#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    int data;
    struct node *next;
};
void traverse(struct node *head)
{
    struct node *ptr = head;
    printf("linked list created\n");
    while (ptr->next!= head)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *create(struct node *head)
{
    int datas[10],s;
    struct node * new, * ptr;
    printf("enter the size:\n");
    scanf("%d",&s);
    printf("enter the data:\n");
   int i=0;
    while (i<s)
    {    
        scanf("%d", &datas[i]);
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new->data = datas[i];
        if(head==NULL)
        {
        new->next =new;
        head = new;
        }
        else
        {
            ptr=head;
            while (ptr->next!=head)
            {
                ptr=ptr->next;
            }ptr->next=new;
            new->next=head;
        } 
      i++;
    }
    return head;
}
/* struct node * deletion_first(struct node * head)
{
    struct node * ptr= head;
    int item;
    item=ptr->data;
    ptr=ptr->next;
    head=ptr;
    return head;
    
} */
struct node * deletion_last(struct node * head)
{
    struct node * ptr =head;
    while (ptr->next!=head)
    {
        ptr=ptr->next;
    }
    int item;
    item=ptr->data;
    ptr=head;
    return head;
    
}
int main()
{
    int datas, i, size;
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head = NULL;
    head = create(head);
   /*  head=deletion_first(head); */
   head=deletion_last(head);
    traverse(head);
}