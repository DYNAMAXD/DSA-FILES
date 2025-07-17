#include<stdio.h>

int main(){
    int a , num = 1;
    printf("Enter the height of triangle :\n");
    scanf("%d" , &a);

    for (int row = 1 ; row <= a ; row++)
    {
        for (int n = 1 ; n <= row ; n++)
        {
            printf("%d " , num);
            num++;
        }
        printf("\n");
    }
}