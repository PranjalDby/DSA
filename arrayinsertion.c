#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int arr[5]={1,2,4,5};
int pos,elements,p;
int i;
   elements=5;
   for(i=0;i<elements;i++)
   {
       printf("%d\n",arr[i]);
   }
    printf("enter the pos:\n");
   scanf("%d",&pos);
    p=33;
   for(i=elements-1;i>=pos;i--)
   {
       arr[i+1]=arr[i];
       arr[pos]=p;
   }
   elements=elements+1;
   printf("array ad-fetr inser:\n");
   for ( i = 0; i <elements; i++)
   {
       printf("%d\n",arr[i]);
   }
   
    
 
   
    
    
}