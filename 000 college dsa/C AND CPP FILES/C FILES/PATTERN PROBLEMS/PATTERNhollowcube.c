#include<stdio.h>

int main(){
    int a , m = 0;
    scanf("%i" , &a);

    // making the top layer of the cube
    while(m<a){
        printf(" * ");
        m++;
    }
    printf("\n");
    m = 0;

    // making the real body of the cube
    for (int i = 1 ;i < a-1 ; i++){
        printf(" * ");
        for (int i = 1 ;i < a-1 ; i++){
            printf("   ");
        }
        printf(" * \n");
    }
    
    // making the bottom layer of the cube
    m = 0;
    while(m<a){
        printf(" * ");
        m++;
    }
}