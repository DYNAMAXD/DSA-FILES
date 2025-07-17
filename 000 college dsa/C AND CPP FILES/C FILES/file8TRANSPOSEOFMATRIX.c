#include<stdio.h>

int main(){
    int matrix[4][5];
    for (int i = 0 ; i < 4 ; i++)
    {for (int j = 0 ; j < 5 ; j++)
        {matrix[i][j] = i*j;}}

    printf("the matrix will be\n");
    for (int i = 0 ; i < 4 ; i++)
    {   printf("[");
        for (int j = 0 ; j < 5 ; j++){printf(" %d ", matrix[i][j]);}
        printf("]\n");
    }
    printf("the transpose of the matrix will be \n");
    for (int i = 0 ; i < 5 ; i++)
    {   
        printf("[");
        for (int j = 0 ; j < 4 ; j++){printf(" %d ", matrix[j][i]);}
        printf("]\n");
    }

    return 0;
}