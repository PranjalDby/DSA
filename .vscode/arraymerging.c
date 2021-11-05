#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int merg(int arr[],int arr2[],int arr3[],int size1,int size2,int max)
{
    int i,j;
    printf("first array is:\n");
    for ( i = 0; i<size1;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("second array is:\n");
    for ( i = 0; i <size2; i++)
    {
        printf("%d\n",arr2[i]);
    }
    
    
}
int main()
{
    int arr[5]={1,3,5,6,7};
    int arr2[6]={4,2,8,9,10,11};
    int arr3[11];
    merg(arr,arr2,arr3,5,6,11);   
}