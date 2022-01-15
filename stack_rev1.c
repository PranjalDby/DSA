#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max 10
int top = 0;
void insert(int arr[], int s)
{
    printf("enter the value:\n");
    int i;
    for (i = 0; i < s; i++)
    {

        scanf("%d", &arr[i]);
        top = top + 1;
    }
}
void push(int arr[], int size)
{
    int data, i;
    printf("enter the value:\n");
    scanf("%d", &data);
    if (top == size - 1)
    {
        printf("overflow:\n");
    }
    else
    {
        top = top + 1;
        arr[top] = data;
    }
}
void pop(int arr[], int size)
{
    int i, val;
    if (top == 0)
    {
        printf("underflow:\n");
    }
    else
    {
        val = arr[top];
        top = top - 1;
    }
}
int peek(int arr[])
{
 
    if (top == 0)
    {
        printf("empty;\n");
        return 0;
    }
    else
    {
        return arr[top];
    }
}
void display(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int main()
{
    //in stack there is one end called top from where deletion and insertion take place:\n
    int size;
    int opt, val;
    int arr[Max];
    printf("enter the size:\n");
    scanf("%d", &size);
    insert(arr, size);
    do
    {
        printf("1 for push:\n");
        printf("2 for pop:\n");
        /*   printf("3 for peep:\n"); */
        printf("3 for display:\n");
        printf("enter the opt:\n");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            push(arr, size);
            size = size + 1;
            break;
        case 2:
            pop(arr, size);
            size = size - 1;
            break;
        case 3:
            val = peek(arr);
            printf("val of first element in stack:%d\n", val);
        case 4:
            display(arr, size);
            break;
        }
    } while (opt != 5);
}