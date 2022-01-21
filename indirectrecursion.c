#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* int ft(int n, int r)
{
    //tail recursion
    if (n == 1 || n == 0)
    {
        return r;
    }
    else
    {
        return ft(n - 1, n * r);
    }
}
int fact(int n)
{
    return ft(n, 1);
} */
void towerOfhanoi(int n, char x, char y,char z)
{
    if(n==1)
    {
        printf("move %c to %c \t",x,z);
    }
    else
    {
        towerOfhanoi(n-1,x,y,z);
        towerOfhanoi(1,x,z,y);
        towerOfhanoi(n-1,y,z,x);
    }
}
int main()
{
  /*   int n;
    printf("enter the number:\n");
    scanf("%d", &n);
    int var = fact(n);
    printf("fact of %d is %d", n, var); */
    int size;
    printf("enter the number of rings:\n");
    scanf("%d",&size);
    towerOfhanoi(size,'A','B','C');
}
