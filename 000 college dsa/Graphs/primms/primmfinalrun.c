#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

int** creategraph(int n)
{
    int ** temp = (int **)malloc(n * n *sizeof(int));
    for(int i = 0 ; i < n ;i++)
    {
        temp[i] = (int *)calloc(n , sizeof(int));
    }
    for(int i = 0 ; i < n ;i++)
    {
        for(int j = 0 ; j < n ;j++)
        {
            temp[i][j] = 999;
        }        
    }
    
    return temp;
}

void addedge(int** graph , int a , int b , int c)
{
    graph[a][b] = c;
    graph[b][a] = c;
}

void mstprim(int ** graph , int v)
{
    int near[v];
    int ans[2][v];
    int min = 999;
    int v1 ,v2;
    for(int i = 0 ; i < v ; i++)
    {
        near[i] = 999;
    }
    for(int i = 0 ; i < v ; i++)
    {
        for(int j = 0 ; j < v ; j++)
        {
            if(min > graph[i][j])
            {
                min = graph[i][j];
                v1 = i;
                v2 = j;
            }
        }
    }
    near[v1] = near[v2] = 0;
    ans[0][0] = v1;
    ans[1][0] = v2;

    for(int i = 1 ; i < v ; i++)
    {
        if(graph[i][v1] < graph[i][v2])
        {
            near[i] = v1;
        }
    }

    for(int i = 1 ; i < v-1 ; i++)
    {
        int min = 999;
        for(int m = 1 ; m < v ; m++)
        {
            if(near[i] != 0 && min > graph[i][near[i]])
            {
                min = graph[i][near[i]];
                v1 = i;
                v2 = near[i];
            }
        }

        ans[0][i] = v1;
        ans[1][i] = near[v1];
        near[v1] = near[v2] = 0;

        for(int m = 1 ; m < v ; m++)
        {
            if(near[i] != 0 && graph[i][v1] < graph[i][v2])
            {
                near[i] = v1;
            }
        }
    for(int i = 0 ; i < v ; i++)
    {
        // printf("%d" , i);
        printf("%d--> %d %d\n" , i ,  ans[0][i] , ans[1][i]);
    }
    }

}

int main()
{
    int v = 11; //10 vertices
    int** graph = creategraph(v);
    // printf("asdf");
    addedge(graph , 1 , 2 , 1);
    addedge(graph , 2 , 3 , 3);
    addedge(graph , 3 , 4 , 1);
    addedge(graph , 4 , 5 , 2);
    addedge(graph , 9 , 3 , 2);
    addedge(graph , 5 , 10 , 6);
    addedge(graph , 5 , 6, 13);
    addedge(graph , 10 , 6 , 7);
    addedge(graph , 7 , 6 , 9);
    addedge(graph , 7 , 8 , 12);
    addedge(graph , 8 , 1 , 10);
    mstprim(graph , v);
    // printf("asdfsdaf");
}