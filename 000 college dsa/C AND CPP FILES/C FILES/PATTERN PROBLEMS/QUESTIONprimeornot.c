#include<stdio.h>

int main(){
    int n;
    int aprime = 1;
    scanf("%i" , &n);
    for (int i = 2 ; i < n ; i++){
        if (n%i == 0){
            printf("%i is not a prime number" , n);
            aprime = 0;
            break;
        }
    }
    if (aprime == 1){
        printf("%i is a prime number" , n);
    }
    return 0;
}