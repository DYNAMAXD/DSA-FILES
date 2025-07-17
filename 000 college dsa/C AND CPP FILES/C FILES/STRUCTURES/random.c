#include<stdio.h>

struct std
{
    int rn;
    char name[100];
    int m1;
    int m2;
    int m3;
};

void disp(struct std class)
{
    printf("%d , %s , %d , %d , %d\n" , class.rn , class.name , class.m1 , class.m2 , class.m3);
}

void change(struct std class)
{
    class.m1 = 4865;
}

void main()
{
    struct std class10 = {12 , "fdsa" , 32 , 34 , 45};
    
    printf("sadf");
    disp(class10);
    change(class10);
    disp(class10);
}
