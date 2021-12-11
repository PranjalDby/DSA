#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node 
{
    struct node * prev;
    int data;
    struct node * next;
};
struct node * create(struct node * head,int size)
{
    int dta[10],i=0;
    struct node * ptr;
    struct node * new;
    printf("enter the element of list:\n");
    while (i<size)
    {

        scanf("%d",&dta[i]);
        if(head==NULL)
        {
            new=(struct node *)malloc(sizeof(struct node));
            new->data=dta[i];
            new->prev=head;
            new->next=NULL;
            head=new;

        }
        else
        {
            ptr=head;
            new=(struct node *)malloc(sizeof(struct node));
            new->data=dta[i];
            while (ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=new;
            new->prev=ptr;
            new->next=NULL;
            
        }
        i++;
    }
    return head;
}
void traverse(struct node * head)
{
    struct node  *ptr=head;
    while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    
}
int main()
{
    int size;
    struct node * head=(struct node *)malloc(sizeof(struct node));
    head=NULL;
     printf("enter the size of list:\n");
    scanf("%d",&size);
    head=create(head,size);
    traverse(head);
}