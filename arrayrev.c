#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void merg(int arr[3],int arr2[5],int arr3[8],int size1,int size2,int size3)
{
    int i;
    int j=0;
    for (i = 0; i <size1;i++)
    {
        arr3[j]=arr[i];
        j++;
    }
    for (i = 0; i <size2;i++)
    {
        arr3[j]=arr2[i];
        j++;
    }
    int m=size1+size2;
    for ( i = 0; i < m; i++)
    {
        printf("%d\n",arr3[i]);
    }
    
}
int main()
{
    int arr[3]={2,4,6},arr2[5]={1,3,5,7,8},arr3[8];
    int size1,size2,size3;
    size1=3,size2=5,size3=8;
    merg(arr,arr2,arr3,size1,size2,size3);
}