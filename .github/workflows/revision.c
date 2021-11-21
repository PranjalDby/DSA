#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int insert(int arr[],int size)
{
    int i,pos,element,j;
    printf("enter the element of an array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the pos and element:\n");
    scanf("%d%d",&pos,&element);
    /* for(i=size-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }arr[pos]=element; */
}
void disp(int arr[],int size)
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
    insert(arr,size);
    size=size+1;
    disp(arr,size);
}