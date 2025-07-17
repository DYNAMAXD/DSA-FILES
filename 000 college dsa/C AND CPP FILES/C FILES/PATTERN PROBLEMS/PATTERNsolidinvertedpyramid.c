#include<stdio.h>

int main(){
    int a;
    scanf("%d" , &a)
    for (int row = 1 ; row <= a ; row++)
    {
        for (int dash = 0 ; dash < row - 1 ; dash ++)
        {
            printf(" ");
        }
        for (int star = 0 ; star < (a - row)*2 + 1 ; star++)
        {
            printf("*");
        }
        
        printf("\n");
    }
}