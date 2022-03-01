#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fact(int n )
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);
    }
}
int main()
{

    int number;
    //int facts = 1;
    printf("enter the number:\n");
    scanf("%d", &number);
    /*     for (int i = 0; i < number; i++)
        {
            fact=fact*(number-i);
        }
     */
    int n =fact(number);
    printf("factorial is:%d\n",n);
}