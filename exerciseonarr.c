#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
     int marks[5][5];
     int rows,cols,avg=50,total[5][5],no=0;
     for(rows=0;rows<5;rows++)
     {
         for(cols=0;cols<5;cols++)
         {
             printf("enter the marks obtained by student %d in %d subject:\n",rows+1,cols+1);
             scanf("%d",&marks[rows][cols]);
         }
     }
     for(rows=0;rows<5;rows++)
     {
         for(cols=0;cols<5;cols++)
         {
            total[rows][cols]=(marks[rows][0]+marks[0][cols])/2;
            printf("avg marks is %d in %d subject is:%d\n",rows+1,cols+1,total[rows][cols]);
    
         }
     }
     for(rows=0;rows<5;rows++)
     {
         for(cols=0;cols<5;cols++)
         {
              if(total[rows][cols]>avg)
            {
                no++;
            }
         }
     } printf("%d\n",no);

}