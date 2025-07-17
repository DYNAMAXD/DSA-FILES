#include<stdio.h>
#include<stdlib.h>


int** creategraph(int n)
{
    int** temp = (int**)malloc(n * n*sizeof(int));
    for(int i = 0 ; i < n ; i++)
    {
        temp[i] = (int *)calloc(n , sizeof(int));
    }

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            temp[i][j] = 999;
        }
    }
    return temp;
}

void addedge(int** graph , int a , int b ,int c)
{
   graph[a][b] = c;
   graph[b][a] = c;
}


void mstprim(int **graph , int v)
{
    int near[v];
    for(int i = 0 ; i < v ; i++)
    {
        near[i] = 999;
    }

    int ans[2][v];

    int min = 999;
    int v1 , v2;
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

    ans[0][0] = v1;
    ans[1][0] = v2;
    near[v1] = near[v2] = 0;

    for(int i = 0 ; i < v ; i++)
    {
        if(graph[i][v1] < graph[i][v2])
        {
            near[i] = v1;
        }
        else
        {
            near[i] = v2;
        }
    }

    for(int i = 1 ; i < v-1 ; i++)
    {
        int min = 999;
        for(int m = 1 ; m < v  ; m++)
        {
            if(near[m] != 0 && graph[m][near[m]] < min)
            {
                min = graph[m][near[m]];
                v1 = m;
                v2 = near[m];
            }
        }

        ans[0][i] = v1;
        ans[1][i] = v2;
        near[v1] = near[v2] = 0;

        for(int m = 1 ; m < v ; m++)
        {
            if(near[m] != 0 && graph[m][v1] < graph[m][v2])
            {
                near[m] = v1;
            }
        }
    }

    for(int i = 1 ; i < v ; i++)
    {
        printf("%d %d --> %d\n" , ans[0][i] , ans[1][i] , graph[ans[0][i]][ans[1][i]]);
    }

}

int main()
{
    int v = 10; //9 vertices
    int** graph1 = creategraph(v);

    addedge(graph1 , 1 , 2,  12);
    addedge(graph1 , 2 , 3 , 12);
    addedge(graph1 , 3 , 4 , 8);
    addedge(graph1 , 4 , 5 , 16);
    addedge(graph1 , 4 , 7 , 14);
    addedge(graph1 , 2 , 7 , 10);
    addedge(graph1 , 5 , 6 , 20);
    addedge(graph1 , 1 , 6 , 5);
    addedge(graph1 , 7 , 3 , 4);
    addedge(graph1 , 9 , 7 , 8);
    addedge(graph1 , 5 , 8 , 15);

    mstprim(graph1 , v);

}