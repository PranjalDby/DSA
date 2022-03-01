#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int data;
    struct node * next;
};
struct node * create_list(struct node * head,int size){
    struct node * ptr,* new;
    int datas[10];
    int i=0;
    printf("enter the data of liked list:\n");
    printf("\n");
    while (i<size)
    {
        scanf("%d",&datas[i]);
        if (head==NULL)
        {
            new=(struct node *)malloc(sizeof(struct node));
            new->data=datas[i];
            new->next=NULL;
            head=new;

        }else
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
        }
        i++;
        
    }
    return head;
}
void traverse(struct node * start)
{
    struct node * ptr=start;
    while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    
}
/* struct node * insert_at_first(struct node * head,int elem)
{
    struct node * ptr =head;
    struct node * new =(struct node * )malloc(sizeof(struct node));
    new->data=elem;
    new->next=head;
    ptr=new;
    return new;
    
}
 */
/* struct node * insert_at_last(struct node * start,int elem)
{
    struct node * ptr=start;
    struct node * new =(struct node * )malloc(sizeof(struct node));
    new->data=elem;
    while (ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=new;
    new->next=NULL;
    return start;
    
}
 */
struct node * insert_at_index(struct node * start,int elem)
{
    int index;
    struct node * ptr=start;
    printf("enter the index:\n");
    scanf("%d",&index);
    struct node * new =(struct node *)malloc(sizeof(struct node));
    new->data=elem;
    int i=0;
    while (i!=index-1)
    {
        ptr=ptr->next;
        i++;
    }
    new->next=ptr->next;
    ptr->next=new;
    return start;
    
}
int main()
{
    struct node * head=(struct node *)malloc(sizeof(struct node));
    int size;
    printf("enter the size:\n");
    scanf("%d",&size);
    head=NULL;
    head=create_list(head,size);
    printf("\n");
    // head=insert_at_first(head,90);
    // head=insert_at_last(head,47);
    head=insert_at_index(head,100);
    traverse(head);
}