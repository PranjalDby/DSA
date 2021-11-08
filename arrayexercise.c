#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void smallest(int arr[],int size)
{
    printf("enter the elements of an array:\n");
    int i;
    int j=0;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]<arr[0])
        {
            int element=arr[i];
            printf("smallest number is %d\n",element);
        }
    }
}
int main()
{
    int arr[10];
    int size=10;
    smallest(arr,size);
}