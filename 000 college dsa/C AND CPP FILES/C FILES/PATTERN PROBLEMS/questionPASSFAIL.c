#include<stdio.h>

int main(){
    int mark1 , mark2, mark3;
    printf("enter the mark of subject1 ");
    scanf("%d" , &mark1);
    printf("enter the mark of subject2 ");
    scanf("%d" , &mark1);
    printf("enter the mark of sunject3 ");
    scanf("%d" , &mark1);
    if ((mark1 >= 33)&& (mark1 >= 33)&& (mark1 >= 33) && ((mark1 + mark2 + mark3) >= 120))
    {
        printf("pass");
    }
    else{
        printf("fail");
    }
    }