#include<stdio.h>
int f = 3;

void call(int matr[f][1])
{
    printf("%d",matr[f][1]);
}

int main()
{
    int mat[3][2] = {1,2,34,371,4,5};
scanf("%d" , &f);
    call(mat);
    return 0;
}