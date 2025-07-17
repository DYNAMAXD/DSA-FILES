#include<stdio.h>
int factori(int a);
int ncr(int a ,int b );

int main(){
    int a ;
    scanf("%d" , &a);
    for (int n = 0 ; n < a ; n++)
    {   
        for (int dash = 0 ; dash < a-n ; dash++)
        {
            printf(" ");
        }
        for (int r = 0 ; r <= n ; r++)
        {
            int g = ncr(n , r);
            printf("%d " , g);
        }
        printf("\n");
    }
    
}
//defning ncr
int ncr(int n ,int r)
{
    int ans = factori(n)/(factori(r)*factori(n-r));
    return ans;
}
//defning factorial of a number
int factori(int a)
{
    int ans = 1;
    for (int i = 1 ; i <=a ; i++)
    {
        ans *= i;
    }
    return ans;
}


