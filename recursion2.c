#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int fibonacci(int num)
{
    if(num==0)
    {
        return 0;
    }
    else if (num==1)
    {
        return 1;
    }
    else
    {
        return (fibonacci(num-1)+fibonacci(num-2));
    }
    
}
int main()
{
    int i,num,res;
    printf("enter the no of terms:\n");
    scanf("%d",&num);
    for ( i = 0; i < num; i++)
    {
       res=fibonacci(i);
       printf("%d\t",res);
    }
    
}   