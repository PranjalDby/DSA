#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node 
{
    struct node * prev;
    int data;
    struct node * next;
};
void traverse(struct node * head)
{
    struct node * ptr= head;
    printf("list created\n");
    while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    
}
struct node * creation(struct node * head,int size)
{
    int i=0,datas[10];
    struct node * new,*ptr;
    printf("enter the data of list:\n");
    while (i<size)
    {
        scanf("%d",&datas[i]);
        if (head==NULL)
        {
            new=(struct node *)malloc(sizeof(struct node));
            new->prev=head;
            new->data=datas[i];
            new->next=NULL;
            head=new;
        }
        else
        {
            ptr=head;
            new=(struct node *)malloc(sizeof(struct node));
            new->data=datas[i];
            while (ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=new;
            new->next=NULL;
            new->prev=ptr;

        }
        
        i++;
    }
    return head;
    
}
/* struct node * deletion_at_first(struct node * head)
{
    struct node * ptr= head;
    int item;
    item=ptr->data;
    ptr=ptr->next;
    ptr->prev=ptr;
    free(head);
    head=ptr;
    return head;
} */

/* struct node * deletion_last(struct node * head)
{
    int item;
    struct node * ptr=head;
    while (ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    item=ptr->data;
    ptr->prev->next=ptr;
    free(ptr);
    return head;

    
} */
struct node * insert_at_index(struct node * head,int index)
{
    struct node * ptr,*item;
    ptr=head;
    int i=0,itt;
    while (i!=index-1)
    {
        ptr=ptr->next;
        i++;
    }
   /*  item=ptr->next;
    ptr->next=item->next;
    item->next->prev=ptr;
    free(item); */
    return head;

    
}
int main()
{
    struct node * head=(struct node *)malloc(sizeof(struct node));
    head=NULL;
    int size;
    printf("eneter the size of list:\n");
    scanf("%d",&size);
    head=creation(head,size);
  /*   head=deletion_at_first(head); */
  /* head=deletion_last(head); */
  int index;
  printf("enter the index:\n");
  scanf("%d",&index);
 head= insert_at_index(head,index);
    traverse(head);
}