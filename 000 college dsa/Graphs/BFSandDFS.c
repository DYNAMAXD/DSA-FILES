#include<stdio.h>
#include<stdlib.h>

int** creatematrix(int n)
{
    int** temp = (int**)malloc(n* sizeof(int));
    for(int i = 0 ; i < n ; i++)
    {
        temp[i] = (int*)calloc(n , sizeof(int));
    }
    return temp;
}

void addedge(int ** matrix , int data , int a , int b)
{
    matrix[a][b] = data;
    matrix[b][a] = data;
}

void printmatrix(int** matrix , int size)
{
    for( int i = 0 ; i < size ; i++)
    {
        for( int j = 0 ; j < size ; j++)
        {
            printf("%d  " , matrix[i][j]);
        }
        printf("\n");
    }
}

void bfs(int ** matrix , int n , int t)
{
    int queue[n];
    int front = 0 , rear = 0;

    int* visited = (int *)calloc(n , sizeof(int));
    queue[rear++] = t;
    visited[t] = 1;
    printf("the bfs would be  ");
    while(front < rear)
    {
        int current = queue[front++];
        printf("%d  " , current);
        for(int i = 0 ; i < n ;i++)
        {
            if(matrix[i][current] != 0 && !visited[i])
            {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }
}

void dfshelper(int **matrix , int * visited , int n , int t)
{
    visited[t] = 1;
    printf("%d " , t);
    for(int i = 0 ; i < n ; i++)
    {
        if(matrix[i][t] != 0 && !visited[i])
        {
            dfshelper(matrix , visited , n , i);
        }
    }
}

void dfs(int ** matrix , int n , int t)
{
    int* visited = (int *)calloc(n , sizeof(int));
    printf("the dfs wold be");
    dfshelper(matrix , visited ,  n , t);
    printf("\n");
}

int main()
{
    int v = 8; //vertices = 7
    int ** matrix = creatematrix(v);
    addedge(matrix , 1 , 1 , 2);
    addedge(matrix , 1 , 4, 2);
    addedge(matrix , 1 , 3, 2);
    addedge(matrix , 1 , 3, 6);
    addedge(matrix , 1 , 2 , 7);
    addedge(matrix , 1 , 1 , 4);
 
    printmatrix(matrix , v);
    bfs(matrix , v  , 2);
    printf("\n");
    dfs(matrix , v  , 2);
}