#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max 5
int top = -1;
int arr[Max];
void push(int arr[], int elem)
{
    if (top == -1)
    {
        top = top + 1;
        arr[top] = elem;
    }
}
int pop(int arr[])
{
    int temp;
    if (top == -1)
    {
        printf("underflow:\n");
    }
    else
    {
        temp = arr[top];
        top = top - 1;
    }
    return temp;
}
void peek(int arr[])
{
    if(top==-1)
    {
        printf("stack is empty:\n");
    }
    else{
        printf("%d\n",arr[top]);
    }
}
int main()
{
    int opt;
    int element, temp;
    do
    {
        printf("1 for push 2 for pop 3 for peek:\n");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            printf("enter the element:\n");
            scanf("%d", &element);
            push(arr, element);
            printf("%d is added to stack:\n", element);
            break;
        case 2:
            temp = pop(arr);
            printf("%d is removed from temp:\n", temp);
            break;
        case 3:
        printf("element in stack is:\n");
        peek(arr);
        break;
        }
    } while (opt != 4);
}