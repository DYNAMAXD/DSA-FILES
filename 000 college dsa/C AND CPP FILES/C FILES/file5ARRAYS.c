#include<stdio.h>

int main(){
    int marks[5];
    for (int i = 0 ; i <5 ; i++)
    {
        printf("enter the value of marks of %dth student\t" , i+1);
        scanf("%d" , &marks[i]);
    }

    for (int i = 0 ; i <5 ; i++)
    {
        printf("marks of %dth student is %d\n" , i+1 , marks[i]);
        // scanf("%d" , &marks[i]);
    }
    return 0;
}