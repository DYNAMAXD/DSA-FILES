#include<stdio.h>

int main(){
    int n ;
    printf("enter the number");
    scanf("%d" , &n);
    int ans = 1;
    // using a for loop
    // for (int i = 1 ; i <= n;i++){
    //     ans*= i;
    // }
    // using a while loop
    // while (n >= 1){
    //     ans *= n;
    //     n--;
    // }
    printf("%i" , ans);
}   