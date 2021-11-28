#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    /* int arr[6]={2,4,1,5,7,2};
    int i,j,sum=8;
    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
           if(arr[i]+arr[j]==sum)
           {
               printf("found\n");
               exit;
           }
        }
    }    */

   /*  int arr[6]={2,4,6,8,10,1};
    int arr2[6];
    int i;
    arr[5]=arr[5]+1;
    for(i=0;i<6;i++)
    {
        printf("%d\n",arr[i]);
    } */
    int arr[3]={1,9,9};
    int arr2[4],i,j;
    int carry=1;

    for(i=3;i>=0;i--)
    {   
        if(carry==1)
        {
       arr[i]=arr[i]+carry;
       printf("%d\n",arr[i]);
        }
    }
}