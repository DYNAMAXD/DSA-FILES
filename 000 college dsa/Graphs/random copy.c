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


int main()
{
    int v = 6; //vertices = 5
    int** matrix = creatematrix(6);
    addedge(matrix ,1 , 2 , 3);
    addedge(matrix ,1 , 3 , 6);
    addedge(matrix ,2 , 3 , 2);
    addedge(matrix ,2 , 4 , 4);
    addedge(matrix ,3 , 4 , 1);
}