#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=low-1;
    for (int j = low;j<high;j++)
    {
        if (arr[j]<pivot)
        {
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        
    }
    i++;
    int temp=arr[i];
    arr[i]=arr[high];
    arr[high]=temp;
    return i;
    
}
void quick(int arr[],int low,int high)
{
    if (low<high)
    {
        int pindx=partition(arr,low,high);
        quick(arr,low,pindx-1);
        quick(arr,pindx+1,high);
    }
    

}
int main()
{
    int arr[5]={2,5,1,7,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    quick(arr,0,size-1);
    printf("sorted array is :\n");
    for (int i = 0; i <size; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}