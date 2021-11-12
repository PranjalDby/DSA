#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* passing only row */
/* void func(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
} */
/* void entire(int arr[3][3],int row)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d\n",arr[i][j]);
        }
    }
    
} */
int main()
{
    
   int arr[3][3]={{1,2,4},{6,8,10},{7,5,3}};
   int i,j,temp;
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           temp=arr[i][0];
           arr[i][0]=arr[0][j];
           arr[0][j]=arr[i][j];
           printf("[%d][%d]=%d\n",i,j,arr[i][j]);
       }
   }
}       