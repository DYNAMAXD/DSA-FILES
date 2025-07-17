#include<stdio.h>
#include<string.h>


int main()
{   
    char arrays[] = {'a' , 'b' , 'c', 'd' , '\0'};
    int intarray[10];
    for (int i = 0 ; i < 10 ; i++)
    {
        intarray[i] = i*i*i;
    }

    for (int i = 0 ; i < 10 ; i++)
    {
        printf("%d\n" ,intarray[i]);
    }

    printf("%s" , arrays);
    return 0;
}