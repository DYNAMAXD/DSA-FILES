#include<stdio.h>

int factorial();

int main(){
    int number;
    scanf("%i" , &number);
    factorial(number);
return 0;
}

int factorial(int a){
    int ans = 1;
    for (int i = 1 ; i <= a ; i++ ){
        ans *= i;
    }
    printf("The factorial of %i is %i" , a , ans);
}