#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int fibo(int size)
{
    int f[size+2];
    f[0]=0,f[1]=1;
    int i;
    for ( i = 2; i <=size; i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    return f[size];
    
}
int fbo(int size)
{
    if(size==0)
    {
        return 0;
    }
    else{
        return fibo(size-1)+fibo(size-2);
    }
    
}
int main()
{
    int size;
    printf("enter the size:\n");
    scanf("%d",&size);
    int n=fibo(size);
    printf("%d\n",n);
    printf("with recursion:%d\n",fbo(size));
    
}