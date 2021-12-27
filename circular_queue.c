#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Max 10
int circular_que[Max];
int front=0,rear=0;
void insert(int arr[])
{
    int val;
    printf("enter the value that you want inserted:\n");
    scanf("%d",&val);
    if(front==0&&rear==Max-1)
    {
        printf("full:\n");
    }
    else if (rear!=Max-1)
    {
        rear++;
        arr[rear]=val;
    }
    else if (front!=0&&rear==Max-1)
    {
        rear=0;
        rear++;
        arr[rear]=val;
    }
    
    
}
int peek(int arr[])
{
    int vals;
    if(front==0&&rear==0)
    {
        printf("empty:\n");
    }
    else
    {
      return  vals=arr[rear];
    }
}
int main()
{
    int opt,val,num;
    do
    {
        printf("1 for insertion:\n");
        printf("2 for deletion:\n");
        printf("3 for peek:\n");
        printf("enter the option:\n");
        scanf("%d",&opt);
        switch (opt)
        {
        case 1:
        insert(circular_que);
            break;
        case 3:
         num=peek(circular_que);
         printf("val at que is %d\n",num);
        break;
        }
    } while (opt!=4);
    
}