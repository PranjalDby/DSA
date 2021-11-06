#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int merg(int arr[],int arr2[],int arr3[],int size1,int size2,int max)
{
    int i,j,k;
    int index=0;
    for (i = 0;i <size1;i++)
    {
         arr3[index]=arr[i];
         index++;
    }
    for (i = 0; i<size2;i++)
    {
        arr3[index]=arr2[i];
        index++;
    }
    for ( j = 0; j <max; j++)
    {
        printf("%d\n",arr3[j]);
    } 
}
int main()
{
    int arr[5]={1,3,5,6,7};
    int arr2[6]={4,2,8,9,10,11};
    int arr3[11];
    merg(arr,arr2,arr3,5,6,11);   
}