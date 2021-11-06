#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void merg(int arr[],int arr2[],int arr3[],int size1,int size2,int size3)
{
    int i=0,j=0,index=0;
    printf("enter the first element:\n");
    while (i<size1)
    {
        scanf("%d",&arr[i]);
        i++;
    }
    printf("enter the second element:\n");
    while (j<size2)
    {
        scanf("%d",&arr2[j]);
        j++;
    }
    while (i<size1&&j<size2)
    {
        if(arr[i]<arr2[j])
        {
            arr3[index]=arr[i];
            i++;
        }else{
            arr3[index]=arr2[j];
            j++;
        }
    }
    while (i<size1)
    {
        arr3[index]=arr[i];
        
    }
    
    
    
}
int main()
{
    int arr[4],arr2[5],arr3[15];

    merg(arr,arr2,arr3,4,5,15);
}   