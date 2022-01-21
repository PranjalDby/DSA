#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max 5
int front = 0;
int rear = 0;
int insert(int arr[], int size)
{
    if (rear == 0)
    {
        printf("enter the data:\n");
        for (int i = 0; i < size - 1; i++)
        {
            scanf("%d", &arr[i]);
            rear = rear+1;
        }
       
    }
}
void insert_elem(int arr[], int size)
{
    if (front > rear || rear > Max - 1)
    {
        printf("overflow:\n");
    }
    /* else if (rear == 0)
    {
        int val;
        printf("enter the value:\n");
        scanf("%d",&val);
            arr[rear] =val;
            front=arr[rear];
            rear=rear+1;
    } */
    else
    {
        int val2;
        printf("enter the val:");
        scanf("%d",& val2);
        arr[rear]=val2;
    }
}
int delete(int arr[],int s)
{
    if (front>=rear)
    {
        printf("underflow:\n");
    }
    else
    {
        int val=arr[front];
        front=front+1;
        return val;
    }
    
}
void display(int arr[])
{
    for (int i = 0; i < Max; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int main()
{
    //queue is linear data structure in which there is two points
    //one is front where deletition of element take place
    //other end is known as rear where insertion take place
    //we can represent heap in form of array or linked list
    int arr[Max];
    insert(arr, Max);
    int opt,del;
    do
    {
        printf("1 for insert an elemnt:\n");
        printf("2 for display an elemnt:\n");
        printf("3 for delete an elemnt:\n");
        printf("enter the option:\n");
        scanf("%d",&opt);
        switch (opt)
        {
        case 1:
            insert_elem(arr, Max);
            break;
        case 2:
            display(arr);
            break;
        case 3:
             del=delete(arr,Max);
            printf("%d is deleted from queue:\n",del);
            break;
        }
    } while (opt != 4);
}