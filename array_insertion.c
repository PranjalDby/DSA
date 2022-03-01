#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* void insert_at_middle(int arr[],int size,int lower )
{
    int middle=(size-lower)/2;
    int i;
    int val=9,temp;
    for (i =size; i>=middle;i--)
    {
        if (i>=middle-1)
        {
            arr[i+1]=arr[i];
        }
        temp=arr[i];
        arr[i]=val;
        
    }
    
} */
/* void insert_at_index(int arr[],int size)
{
    int i;
    int index,val=5,temp;
    printf("enter the index where you want to add:\n");
    scanf("%d",&index);
    printf("\n");
    for (i =Max-1; i>=index;i--)
    {
        if (i>=index-1)
        {
            arr[i+1]=arr[i];
        }
        temp=arr[i];
        arr[i]=val;

        
    }
    
} */
// void delete(int arr[],int size)
// {
//     int i,temp,index;
//     printf("enter the index:\n");
//     scanf("%d",&index);
//     /* i=index; */
//     printf("\n");
//     for (i =index; i <size; i++)
//     {
//         arr[i]=arr[i+1];
//     }
// }
void updation(int arr[],int size)
{
    int i,index=2;
    i=0;
    while (i<index)
    {
        i++;
    }arr[i]=36;
    
}
void display(int arr[],int size)
{
    int i;
    for ( i = 0; i <size; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}
int main()
{
    int arr[5]={2,10,22,8,9};
   /*  printf("enter the element:\n");
    int i;
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&arr[i]);
    } */
    int size=5;
    // int lower_bound=0;
   /*  insert_at_middle(arr,size,lower_bound); */
   /*  insert_at_index(arr,size);
    size=size+1; */
   /*  delete(arr,size);
    size=size-1; */
    updation(arr,size);
    display(arr,size);
}