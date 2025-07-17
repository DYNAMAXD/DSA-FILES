#include <stdio.h>

int main()
{
    int cost = 100 ;
    // scanf("%d\n" , &cost);
    printf("The tax amount is %f" , cost*18/100);
    printf("The tip amount is %f" , cost*5/100);
    printf("The total amount is %f" , cost + (cost*18/100) + cost*5/100);
}