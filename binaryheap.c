#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

void heap(int arr[],int n,int i)
{
    int p=(i-1)/2;
    if (arr[i]>arr[p])
    {
        int temp;
        temp=arr[p];
        arr[p]=arr[i];
        arr[i]=temp;
        heap(arr,i,p);
    }
}
void insert(int arr[], int n)
{
    int val;
    printf("enter the val:\n");
    scanf("%d", &val);
    n = n + 1;
    arr[n - 1] = val;
    int i = n - 1;
    heap(arr,n,5);
    
}
void diaplay(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int main()
{
    int heap[MAX] = {10, 5, 3, 2, 4};
    int n = 5;
    insert(heap, n);
    diaplay(heap, n);
}