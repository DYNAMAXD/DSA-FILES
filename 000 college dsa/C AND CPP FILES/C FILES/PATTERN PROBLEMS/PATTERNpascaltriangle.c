#include<stdio.h>

int main(){
    int a = 5;
    for (int rows = 1 ; rows <= a ; rows++)
    {
        for (int dash = 1 ; dash <= a - rows ; dash++)
        {
            printf("-");

            if (dash == a - rows)
            {
                printf("%d" , dash-a);
            }
        }
        printf("\n");
    }



    printf("sadhfuuilafsduiasfdh");
    return 0;
}