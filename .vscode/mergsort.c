#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void merge(int arr[], int mid, int beg, int end)
{
    int i,j,k,temp;
    int n,n1;
    n=mid-beg+1,n1=end-mid;
    int arr1[n],arr2[n1];
    for (i =0; i <n; i++)
    {
        arr1[i]=arr[i+beg];
        for ( j=0 ; j <n1; j++)
        {
            arr2[j]=arr[mid+1+j];
        }
        
    }
   i=0,j=0,k=beg;
   while (i<n&&j<n1)
   {
       if (arr1[i]<=arr2[j])
       {
           arr[k]=arr1[i];
           i++;
       }
       else
       {
           arr[k]=arr2[j];
           j++;
       }
       k++;
   }
   while (i<n)
   {
       arr[k]=arr1[i];
       i++;
       k++;
   }
   while (j<n1)
   {
       arr[k]=arr2[j];
       j++;
       k++;
   }
}
void merge_sorting(int arr[], int beg, int end)
{
    int mid;
    if (beg < end)
    {
        mid = (beg + end)/2;
        merge_sorting(arr, beg,mid);
        merge_sorting(arr, mid + 1, end);
        merge(arr, mid, beg, end);
    }
}
void array(int arr[],int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}
int main()
{
    int arr[5]={39,9,45,18,20};
    int size=5;
    merge_sorting(arr, 0, size - 1);
    printf("array after:\n");
    array(arr,size);
}
