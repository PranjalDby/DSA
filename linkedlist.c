#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int data;
    struct node *ptr;
};
/* void func(struct node *nodes){
    while(nodes!=NULL){
    printf("%d\n",nodes->data);
    nodes=nodes->ptr;
}
}
 */
int main()
{   
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *forth;
    struct node *pointer;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    forth=(struct node*)malloc(sizeof(struct node));

    head->data=7;
    head->ptr=second;
    second->data=11;
    second->ptr=third;
    third->data=12;
    third->ptr=forth;
    forth->data=112;
    forth->ptr=NULL;
    pointer=head;
    while (pointer!=NULL)
    {
       printf("%d\n",pointer->data);
       pointer=pointer->ptr;
    }
    
    
}