#include<stdio.h>

struct circle
{
    int radius ;
    float area;
    float cmf;
};

int count = 0;

void rad(struct circle* cir ,int* count, float radius)
{
    cir[*count].radius = radius;
    cir[*count].radius = 3.14 * radius * radius;
    cir[*count].cmf = 2 * 3.14 * radius;

}

int main()
{
    int n;
    scanf("%d" , &n);
    struct circle c1[n];
    for(int i = 0 ; i < n ; i++)
    {
        rad(c1 , &count ,(float) i*2);
        count++;
    }
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d , %f , %f\n" , c1[i].radius , c1[i].radius , c1[i].cmf );
        // printf("sdafafsdfasd");
    }
}