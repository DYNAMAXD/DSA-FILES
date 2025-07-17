#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

int n;

int** creatematrix(int n)
{
    int** temp = (int**)malloc(n*sizeof(int* ));
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

void addedge(int** graph , int a , int b , int c)
{
    graph[a][b] = c;
    graph[b][a] = c;
}

void printgraph(int ** graph , int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            printf("%d   " , graph[i][j]);
        }
        printf("\n");
    }
}

int mstprim(int ** graph , int v)
{
    int visited[v];
    int near[v];
    int ans[2][v];
    
    for(int i = 0 ; i < v ; i++)
    {
        near[i] = 999;
    }

    int t1 = INT_MAX;
    int t2 , t3;
    for(int i = 0 ; i < v ; i++)
    {
        for(int j = 0 ; j < v ; j++)
        {
            if(t1 > graph[i][j])
            {
                t1 = graph[i][j];
                t2 = i;
                t3 = j;
            }
        }
    }

    ans[0][0] = t2;
    ans[1][0] = t3;
    near[t2] = near[t3]= 0;

    for(int i = 1 ; i < v; i++)
    {
        if(near[i] != 0)
        {
            if(graph[t2][i] >= graph[t3][i])
            {
                near[i] = t3;
            }
            else
            {
                near[i] = t2;
            }
        }
    }

    int t4;
    for(int i = 1 ; i < v - 2; i++)
    {
        for(int m = 0 ; m < v ;m++)
        {
            printf("%d -->%d\n" ,m, near[m]);
        } 
        printf("\n\n\n");
        int min = 999;
        for(int m = 1 ; m <v ; m++)
        {
            if(near[m] != 0 && graph[m][near[m]] <= min )
            {
                min = graph[m][near[m]];
                t4 = m;
            }
        }
        ans[0][i] = t4;
        ans[1][i] = near[t4];
        near[t4] = 0;
        for(int m= 0;m<v;m++){
            if(near[m]!= 0 && graph[m][t4]<graph[m][near[t4]]){
                near[m] = t4;
            }
        }

    }
    for(int i  =0 ;i<v - 1;i++){
        printf("%d   %d -> %d\n",ans[0][i],ans[1][i],graph[ans[0][i]][ans[1][i]]);
    }

}

int main()
{
    int v = 8; //7 vertices
    int** graph1 = creatematrix(v);
    addedge(graph1 , 1 , 2,  25);
    addedge(graph1 , 2 , 3 , 12);
    addedge(graph1 , 3 , 4 , 8);
    addedge(graph1 , 4 , 5 , 16);
    addedge(graph1 , 4 , 7 , 14);
    addedge(graph1 , 2 , 7 , 10);
    addedge(graph1 , 5 , 6 , 20);
    addedge(graph1 , 1 , 6 , 5);
    addedge(graph1 , 7 , 3 , 4);
    addedge(graph1 , 5 , 7 , 18);

    mstprim(graph1 , v);
}