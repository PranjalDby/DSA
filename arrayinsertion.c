#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void display(int arr[],int size)
{
    printf("elements in array is:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}
void insert(int arr[],int size,int element,int index,int max)
{
    if(size>=max){
        printf("not enough space:\n");
    }
    int i=size;
    while (i>=index)
    {
        arr[i+1]=arr[i];
        i--;
    }
    arr[index]=element;
    
}
int main()
{
    int arr[100]={1,2,3,4};
    int size=4;
    int index=3;
    int element=6;
    insert(arr,size,element,index,100);
    size=size+1;
    display(arr,size);    
 
   
    
    
}