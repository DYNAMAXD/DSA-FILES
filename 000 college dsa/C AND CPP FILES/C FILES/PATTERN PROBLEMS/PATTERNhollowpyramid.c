#include<stdio.h>

int main(){
    int a  ;
    scanf("%d" , &a);
    for (int rows = 1 ; rows < a ; rows++)
    {
        for (int dash1 = 1 ; dash1 <= a - rows ; dash1++)
        {
            printf(" ");
        }

        printf("*");
        
        for (int dash2 = 1 ; dash2 < (rows-1)*2  ; dash2++)
        {
            printf(" ");
        }

        if (rows != 1)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1 ; i <= (a-1)*2 + 1 ; i++)
    {
        printf("*");
    }
    printf("\n");
}
