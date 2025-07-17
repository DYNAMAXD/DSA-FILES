#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a ;
    scanf("%d" , &a);
    int middle = (a+1)/2;
    for (int rows = 1; rows <= a ; rows++)
    // dash is just another name for whitespaces
    {
        for (int dash = 1 ; dash <= abs(abs(rows - middle)-middle) ; dash++)
        {
            printf(" ");
        }
        for (int star = 1 ; star <= (abs(rows - middle)*2 + 1 ) ; star++)
        {
            printf("*");
        }
        printf("\n");
    }
}