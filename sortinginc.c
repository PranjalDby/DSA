#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void conquer(int arr[],int si,int ei,int mid)
{
    int merged[ei-si+1];
    int indx1=si;
    int indx2=mid+1;
    int x=0;
    while (indx1<=mid&&indx2<=ei)
    {
        if (arr[indx1]<=arr[indx2])
        {
            merged[x]=arr[indx1];
            indx1++;
            x++;
        }
        else
        {
            merged[x]=arr[indx2];
            indx2++;
            x++;
        }
        
    }
    while (indx1<=mid)
    {
        merged[x++]=arr[indx1++];
    }
    while (indx2<=ei)
    {
        merged[x++]=arr[indx2++];
    }
    int len=sizeof(merged)/sizeof(merged[0]);
    for (int  i = 0,j=si; i <len; i++,j++)
    {
        arr[j]=merged[i];
    } 
}
void divide(int arr[],int si,int ei)
{
    if (si>=ei)
    {
        return;
    }
    int mid=si+(ei-si)/2;
    //recursive;
    divide(arr,si,mid);
    divide(arr,mid+1,ei);
    conquer(arr,si,ei,mid);
}

int main()
{
    //bubble sort
     int arr[5]={2,5,1,7,3};
    /*
    for (int i = 0; i <5; i++)
    {
        for (int j =0;j<5-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
            
        }
        
    }
    printf("array after sorting is:\n");
    for (int i = 0; i <5; i++)
    {
        printf("%d\n",arr[i]);
    } */
    //mergesort
    //divide & conquer
    int size=sizeof(arr)/sizeof(arr[0]);
    divide(arr,0,size-1);
    printf("array after sorting is:\n");
    for (int i = 0; i <size; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    
}