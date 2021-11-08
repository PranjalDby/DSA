#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void read(int arr[10],int size)
{
    int i;
    printf("enter the elements of an array:\n");
    for ( i = 0; i <size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
}
int largest(int arr[10], int size)
{
    int s, i,pos1=0;
    s=arr[0];
    for (i = 1; i < size; i++)
    {
        if (arr[i] > s)
        {
            s = arr[i];
            pos1=i;
        }
    }
    printf("the largest number is:%d\n",s);
    return pos1;
}
int smallest(int arr[10], int size)
{
    int i,p,pos2=0;
    p=arr[0];
    for (i = 1; i < size; i++)
    {
        if (arr[i] < p)
        {
            p = arr[i];
            pos2=i;
        }
    }
    printf("the smallest element is:%d\n",p);
    return pos2;
}
void interchange(int arr[10],int size)
{
    int temp,big,small;
    big=largest(arr,size);
    small=smallest(arr,size);
    temp=arr[big];
    arr[big]=arr[small];
    arr[small]=temp;

}
void display(int arr[10],int size)
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
    int size = 5;
    read(arr,size);
    largest(arr, size);
    smallest(arr, size);
    interchange(arr,size);
    display(arr,size);
}