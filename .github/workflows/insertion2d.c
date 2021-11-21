#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
/* int insert(int arr[10][10],int rows,int cols)
{   int i,j,pos,element;
    printf("enter the elements of array:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter the element:\n");
    scanf("%d",&element);
    int pos1;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            if(element==arr[i][j])
            {
                pos1=arr[i][j];
                printf("found in pos:%d\n",pos1);
            }
        }
    }
} */
int main()
{
    /* int arr[10][10];
    int rows,columns;
    printf("enter the rows and columns of matrix:\n");
    scanf("%d%d",&rows,&columns);
    insert(arr,rows,columns); */
    int arr[10];
    int i,sum,j;
    int size,pos=0,small;
    float mean;
    printf("enter the size of an array:\n");
    scanf("%d",&size);
    printf("enter the elements of an array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    /* printf("array is:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    } */
  /*   printf("mean of an array Is:\n");
    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
        mean=sum/size;
    } printf("%d\n",sum);
    printf("%1.2f\n",mean);

 */
/* small=arr[0];
for(i=0;i<size;i++)
{
    if(small>arr[i])
    {
        small=arr[i];
        pos=i;
    }
}
 printf("pos is %d of element:%d\n"*/
/* int largest;
largest=arr[0];
for(i=0;i<size;i++)
{
    if(largest<arr[i])
    {
        pos=i;
        largest=arr[i];
    }
}
printf("largest element is :%d at pos:%d\n",largest,pos); */
/* int number=0;
i=0;
while(i<size)
{
    number=number+arr[i] * pow(10,i);
    i++;
}
printf("%d\n",number); */
int count=0,loc,num;
for(i=0;i<size;i++)
{
    for(j=i+1;j<size;j++)
    {
    if(arr[i]==arr[j]&&i!=j)
    {
        
        printf("loc %d or %d:\n",i,j);
    }
    }
}
}