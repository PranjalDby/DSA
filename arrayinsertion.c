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
int main()
{
    int arr[100]={1,2,3,4};
    int size=4;
    display(arr,size);    
 
   
    
    
}