// making hollow full pyramid
#include<stdio.h>

int main(){
    int a = 10 ;
    for (int k = 0 ; k <= a ; k++)
    {
        for (int i = 0 ; i < a - k ; i++)
    {
            printf(" ");
    }
        for (int j = k*2 -1  ; j > 0 ; j--)
    {
            printf("*");
    }
    printf("\n");
    }
    
}
