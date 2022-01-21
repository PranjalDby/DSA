#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Max 10
void breadth_first(int visited[],int adj[][Max],int start)
{
    int queue[Max],i,rear=0,front=0;
    queue[++rear]=start;
    visited[start]=1;
    while (rear!=front)
    {
        start=queue[++front];
        if (start==4)
        {
            printf("5\t");
        }
        else
        {
            printf("%c\n",start+65);
            for ( i = 0; i < Max; i++)
            {
                if (adj[start][i]==1 && visited[i]==0)
                {
                    queue[++rear]=i;
                    visited[i]=1;
                }
                
            }
            
        }
        
    }
    

}
int main()
{
    int visited[Max]={0};
    int adjacency[Max][Max],i,j;
    printf("enter the element in adjacency:\n");
    for (i = 0; i <Max; i++)
    {
        for(j=0;j<Max;j++)
        {
            scanf("%d",&adjacency[i][j]);
        }
    }
    breadth_first(visited,adjacency,0);
}