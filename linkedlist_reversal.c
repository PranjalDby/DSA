#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct nodes{
    char data;
    struct nodes *next;
};
int main()
{
    struct nodes *head;
    struct nodes *second;
    struct nodes *third;
    struct nodes *forth;
    struct nodes *fifth;
    struct nodes *six;
    struct nodes *seven;
    head=(struct nodes *)malloc(sizeof(struct nodes));
    second=(struct nodes *)malloc(sizeof(struct nodes));
    third=(struct nodes *)malloc(sizeof(struct nodes));
    forth=(struct nodes *)malloc(sizeof(struct nodes));
    fifth=(struct nodes *)malloc(sizeof(struct nodes));
    six=(struct nodes *)malloc(sizeof(struct nodes));
    seven=(struct nodes *)malloc(sizeof(struct nodes));
    head->data='h';
    head->next=second;
    second->data='e';
    second->next=third;
    third->data='l' ;
    third->next=forth;
    forth->data='l' ;
    forth->next=fifth;
    fifth->data='o' ;
    fifth->next=six;
    six->data='w' ;
    six->next=seven;
    seven->data='r' ;
    seven->next=NULL;
    struct nodes *ptr;
    ptr=head;
    while (ptr!=NULL)
    {
       printf("elements of linkes list:%c\n",ptr->data);
       ptr=ptr->next;
    }
    
}