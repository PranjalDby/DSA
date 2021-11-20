#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void delete(int arr[],int size)
{
    int i,pos;
    printf("enter the element of an array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the position:\n");
    scanf("%d",&pos);
    for(i=pos;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
}
void display(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}
int main()
{
    int arr[10];
    int size;
    printf("enter the size:\n");
    scanf("%d",&size);
    delete(arr,size);
    size=size-1;
    display(arr,size);
}