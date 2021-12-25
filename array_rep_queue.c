#include <stdio.h>
#include <stdlib.h>
#define Max 10
int arr[Max];
int front = 0, rear = 0;
void insert()
{
    int val;
    if (rear == Max)
    {
        printf("overflow\n");
    }
    else
    {
         printf("enter the val\n");
         scanf("%d", &val);
        arr[rear] = val;
        rear++;
    }
}
int delete ()
{
    int vals;
    if(rear==0||front>rear)
    {
        printf("stack empty\n");
    }
    else{
        vals=arr[front];
        front=front+1;
        return vals;
    }
}
int display()
{
    if(rear==0||front>rear)
    {
        printf("stack is empty\n");
    }
    else
    {
        return arr[front];
    }
}
int main()
{
    int opt, val;
    do
    {
        printf("1 for insert\n");
        printf("2 for delete\n");
        printf("3 for display\n");
        printf("4 for exit\n");

     printf("enter the opt:\n");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            insert();
            break;
        case 2:
            val=delete();
            printf("%d is deleted from queue\n",val);
            break;
        case 3:
            val=display();
            printf("val is %d\n",val);
            break;

        }
    }while(opt!=4);
}
