#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int** creatematrix(int n)
{
    int** temp = (int **)malloc(n * n* sizeof(int));
    for(int i = 0 ; i < n;i++)
    {
        temp[i] = (int *)calloc(n , sizeof(int ));
    }
    return temp;
}

void addedge(int** matrix , int a , int b ,int w )
{
    matrix[a][b] = w;
    matrix[b][a] = w;
}

bool iscycle(int ** matrix , int * visited, int next , int parent)
{

}

int* iscycleprev(int ** matrix , int next , int parent, int n)
{
    int* temp = (int*)calloc(n , sizeof(int));
    iscycle(matrix , temp ,  next ,  parent)
}


int main()
{
    int v = 6; //vertices = 5

}