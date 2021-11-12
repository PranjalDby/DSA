#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int arr[3][3]={{1,2,4},{6,9,5},{7,8,34}};
   int (*ptr)[3];
   int i,j;
   ptr=arr;
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("%d\n",(*(ptr+i))[j]);
       }
   }
   
}