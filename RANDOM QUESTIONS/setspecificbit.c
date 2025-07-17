#include<stdio.h>

int main()
{
    int n = 10;
    int k = 2;
    int mask = 1 << k;

    int ans = n | mask;
    
    printf("%d , %d" , ans , 1<<k);
}