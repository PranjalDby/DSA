#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int nu,rev=0,remainder;
    printf("enter the number to reverse:\n");
    scanf("%d",&nu);
    while (nu!=0)
    {
        remainder=nu%10;
        rev=(rev*10)+remainder;
        nu/=10;
        
    }
    printf("%d",rev);
    
}