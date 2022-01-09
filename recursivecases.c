#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int fact(int number)
{
    if(number==1||number==0)
    {
        return 1;
    }
    else
    {
        return number * fact(number-1);
    }
}
void display(int n)
{
    printf("fact is  %d ",n);
}
int main()
{
    int number;
    printf("enter the number:\n");
    scanf("%d",&number); 
    int n=fact(number);  
    display(n);
}