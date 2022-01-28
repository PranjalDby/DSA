#include<stdio.h>
int small(int arr[],int index,int size)
{
    int j,small=arr[index],pos=index;
    for ( j =index+1; j <size; j++)
    {
        if (arr[j]<small)
        {
            small=arr[j];
            pos=j;
        }
    }
    return pos;
    
}
void selectionsort(int arr[],int size)
{
    int i,temp;
    int pos;
    for (i = 0; i <size; i++)
    {
        pos=small(arr,i,size);
        temp=arr[i];
        arr[i]=arr[pos];
        arr[pos]=temp;
    }
    
}
int main()
{
    int arr[6];
    int i,n=6;
    printf("enter the elements:\n");
    for (i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("array before sorting:\n");
    for (i = 0; i <n; i++)
    {
        printf("%d\n",arr[i]);
    }
    selectionsort(arr,n);
    printf("array after sorting:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    
}