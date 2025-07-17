#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int a ;
    scanf("%i" , &a);
    int middle = (a+1)/2;
    for (int rows = 1 ; rows <= a ; rows++)
    //dash is just another name for whitespaces
    {
        int diff = abs((rows - middle));
        for (int dash = 1 ; dash <= diff; dash++)
        {
            printf(" ");
        }
        for (int star = 1 ; star <= (a-(diff)*2); star++)
        {
            printf("*");
        }
        printf("\n");
    }
}