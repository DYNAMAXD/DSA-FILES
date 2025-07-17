#include<stdio.h>

int main(){
    int a;
    scanf("%d" , &a);
    for (int row = 1 ; row <= a ; row++)
    {
        for (int dash = 1 ; dash < row ; dash++)
        {
            printf(" ");
        }

        for (int star = 1 ; star < a ; star++)
        {
            printf("*");
        }
        printf("\n");
    }
}