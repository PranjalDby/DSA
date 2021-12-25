#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//factorial of number...
/* int factorial(int num)
{
   
       if(num==1||num==0)
       {
           return 1;
       }else{

           return num * factorial(num-1);
       }
    
} */
//gcd
/* int GCD(int num1,int num2)
{
    int quotient;
    int rem=num1%num2;
    if(rem==0)
    {
        return num2;
    }
    else{
        return (GCD(num2,rem));
    }
} */
//finding exponents
/* int EXP(int num1,int num2){
    if(num2==0)
    {
        return 1;
    }
    else
    {
        return (num1*EXP(num1,num2-1));
    }
} */
int main()
{
    int num1;
    int num2,gcd,exps;
    printf("enter the number:\n");
    scanf("%d",&num1);
    printf("enter the number:\n");
    scanf("%d",&num2);
    //base case of recursive function for factorial
   /*  num=factorial(number);
    printf("factorial of %d is %d\n",number,num); */
    //finding gcd(greatest_common_divisorf)
   /* gcd= GCD(num1,num2);
   printf("gcd of %d and %d is %d\n",num1,num2,gcd); */
   //finding exponents
 /*  exps= EXP(num1,num2);
  printf("exponent of %d to power %d is %d\n",num1,num2,exps); */

}