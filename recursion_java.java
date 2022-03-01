import java.util.*;
public class recursion_java {
    public static int fact( int n)
    {
        if(n==0||n==1)
        {
            return 1;
        }
        else
        {
            return (n * (fact(n-1)));
        }
    }
    public static int gcd(int n,int n2)
    {
      int rem=n%n2;
      if(rem==0)
      {
          return n2;
      }
      else{
          return gcd(n2,rem);
      }
    }
    public static int fibo(int i) {
        if(i==0)
        {
            return 0;
        }
        else if(i==1)
        {
            return 1;
        }
        else
        {
            return fibo(i-1)+fibo(i-2);
        }
    }
    public static void main(String[] args) {
        int n;
        Scanner sc=new Scanner(System.in);
      /*   Scanner sc=new Scanner(System.in);
        System.out.print("enter the number:");
        n=sc.nextInt();
       int num= fact(n);
       System.out.println("fact of num: " + num);
       //GCD greatest common divisor
       System.out.println("enter the  two number: ");
       int gd=sc.nextInt();
       int gd1=sc.nextInt();
       int d=gcd(gd,gd1);
       System.out.println("gcd of two numbers: "+d);
       System.out.println("enter the size:");
       int size=sc.nextInt(); */
      /*  System.out.println("enter the size:");
       int size=sc.nextInt();
       int n4;
       for(int i=0;i<size;i++)
       {
           n4=fibo(i);
           System.out.println(n4);
       } */
       System.out.println("enter the number");
       int a=sc.nextInt();
    }
}
