#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int arr[3],arr2[3],arr3[6];
    int i,count=0,j;
    /* printf("enter the element of first array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        arr3[count]=arr[i];
        count++;
    }   
    printf("enter the element of second array:\n");
    for(i=0;i<7;i++)
    {
        scanf("%d",&arr2[i]);
        arr3[count]=arr2[i];
        count++;

    } */
    printf("enter the element of first arry:\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element of second arry:\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
              if(arr[i]<arr2[j])
              {
                  arr3[count]=arr[i];
                  count++;
              }else{
                  arr3[count]=arr2[j];
                  count++;
              }
        }
    }
    if(i==3)
    {
        for(j=0;j<3;j++)
        {
            arr3[count]=arr2[j];
            count++;
        }
    }else if(j==3)
    {
        for(i=0;i<3;i++)
        {
            arr3[count]=arr[i];
            count++;
        }
    }
    printf("array after merging:\n");
    for(i=0;i<6;i++)
    {
        printf("%d\n",arr3[i]);
    }
}