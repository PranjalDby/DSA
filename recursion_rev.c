#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//example of direct recursion
int fact(int s)
{
    if (s==1||s==0)
    {
        return 1;
    }
    else
    {
        return s * fact(s-1);
    }
    
}
int fibonnaci(int s)
{
    if(s==0)//base cases
    {
        return 0;
    }
    else if (s==1)//base cases
    {
        return 1;
    }
    else
    {
        return (fibonnaci(s-1)+fibonnaci(s-2));//recursive case
    }
}
int main()
{
    //a function is said to be recursive function if it call itself
    //it have two parts:
    //best cases??recursive cases
    //ex factorial,tower of hanoi,fibonnaci series
    //factorial
    int size;
    printf("enter the number:\n");
    scanf("%d",&size);
    int num=fact(size);
    printf("fact of %d is %d\n",size,num);
    //fibonnaci ex;011235..(5-1)+(5-2)
    int res,n;
    printf("enter the size or number of terms:\n");
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        res=fibonnaci(i);
        printf("%d\n",res);
    }

}