#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{ 
    int i=0;
    int j=10;
    int arr[i];
    int sum=0;
   while (i<10)
   {
       arr[i]=j;
       sum=sum+arr[i];
        i++;
       j++;
       printf("%d\n",sum);
   }
}