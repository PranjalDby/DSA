#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void del(int arr[],int size,int max)
{
    int i,pos;
    if (size>=max)
    {
        printf("space is required\n");
    }
    
    printf("enter the element of an array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the pos:\n");
    scanf("%d",&pos);
    i=size;
    while(i>=pos)
    {
        arr[i]=arr[i-1];
        arr[pos]=arr[i];
        
    }
}
void dis(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("array after deletion:%d\n",arr[i]);
    }
}
int main()
{
    int arr[100],size;
    printf("enter the size of an array:\n");
    scanf("%d",&size);
    del(arr,size,100);
    size=size-1;
    dis(arr,size);
}