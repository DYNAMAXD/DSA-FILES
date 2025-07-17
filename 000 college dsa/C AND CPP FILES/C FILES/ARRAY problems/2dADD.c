#include<stdio.h>

int m , n;

void display(int array[m][n] , int m , int n);
 
int main()
{
    printf("input the dimensions of two array\n");
    scanf("%d\n" , &m);
    scanf("%d\n" , &n);
    int arr1[m][n] , arr2[m][n] ;
    
    //taking input for the first matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d" , &arr1[i][j]);
        }
        
    }
}

void display(int array , int m , int n)
{
    for (int i = 0; i < m; i++)
    {
        printf("[");
        for (int j = 0; j < n; j++)
        {
            printf(" %d " , array[i][j]);
        }
        printf("]\n");
    }

}