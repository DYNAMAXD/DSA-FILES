#include<stdio.h>

int main(){
    int nu ;
    float  curr_number , max = 0;
    printf("how many numbers?");
    scanf("%d" , &nu);
    while (nu > 0){
        scanf("%f" , &curr_number);
        nu -= 1;
        if (curr_number > max){
            max = curr_number;
        }
    }
    printf("max number is %f" , max);
}