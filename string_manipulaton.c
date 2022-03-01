#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[100],str2[100],str3[100];
    int i,temp,size,size2,j,count=0;
    printf("enter the size of string:\n");
    scanf("%d",&size);
    printf("enter the string:\n");
    for ( i = 0; i <size; i++)
    {
       scanf("%s",&str[i]);
    }
    //reversing the sstring
  /*   for (i =size;i>=0;i--)
    {
        printf("%c",str[i]);
    } */
    //merging of two strings
    printf("enter the size of second string:\n");
    scanf("%d",&size2);
    printf("enter the second string:\n");
    for (i = 0; i <size2; i++)
    {
        scanf("%s",&str2[i]);
    }
    for ( i = 0; i <size; i++)
    {
        str3[count]=str[i];
        count++;
    }
    for (j = 0; j <size2; j++)
    {
            str3[count]=str2[j];
            count++;
    }
    int m=size2+size;
    for (i = 0; i <m; i++)
    {
        printf("%c",str3[i]);
    }
    
    
    
    
    
    
    
    
}