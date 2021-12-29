#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int delete (int arr[], int index, int size)
{
  for (int i = size-1; i>=index; i--)
  {
      arr[i]=arr[i-1];
      arr[index]=arr[i];
  }
  
}
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int main()
{
    int arr[10] = {1, 4, 6, 8,12,22};
    int index;
    printf("enter the index from whihx you want to delete an element:\n");
    scanf("%d",&index);
    int size = 6;
    delete (arr, index, size);
    size = size - 1;
    display(arr, size);
}