#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max 6
int arr[Max];
int front = -1, rear = -1;
void insert()
{
    int val;
    printf("enter the val:\n");
    scanf("%d", &val);
    if (rear == Max - 1)
    {
        printf("overflow\n");
    }
    else
    {
        front=0;
        rear = rear + 1;
        arr[rear] = val;
    }
}
int delete()
{
    int temp;
    if (front == -1 || front > rear)
    {
        printf("Queue is empty:\n");
        return -1;
    }
    else
    {
        temp = arr[front];
        front = front + 1;
        return temp;
    }
}
int peek()
{
    if (rear == -1)
    {
        printf("queue is empty:\n");
    }
    else
    {
        return arr[rear];
    }
}
void display()
{
    for (int i = front; i < rear; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int main()
{
    int opt, temp, val;
    do
    {
        printf("1 for insertion 2 for peek 3 for delete 4 for displayb:\n");
        scanf("%d", &opt);
        printf("\n");
        switch (opt)
        {
        case 1:
            insert();
            break;
        case 2:
            val = peek();
            printf("%d\n", val);
            break;
        case 3:
            temp = delete();
            if (temp==-1);
             printf("val is deleted from queue:%d\n", temp);
            break;
        case 4:
            display();
            break;
        default:
            break;
        }
    } while (opt != 5);
}