#include<stdio.h>

int main(){
    float n;
    printf("table of which number");
    scanf("%f" , &n);
    for (int i = 10 ; i < 0 ; i--){
        // printf("%f X %i = %f \n" ,n , i , n*i );
        printf("%f \n" ,n*i );
    }
}