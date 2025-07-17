#include <stdio.h>
#include <string.h>
#include <conio.h>
struct cr
{
    char name[100];
    int m1;
    int m2;
    int m3;

    float att;

};

int n , count;

void takeip(struct cr*);
void pr(struct cr*);

int main()
{
    struct cr a[100];

    

    scanf("%d\n" , &n);
    struct cr c1[n];
    for (int i = 0; i < n; i++ )
    {
        takeip (c1);   
    }
    pr(c1);

}

void takeip(struct cr* c1)
{

    char name[100];
    int m1;
    int m2;;
    int m3;
    float att;
    scanf("%[^\n]s" , name);
    scanf("%d %d %d %f\n" , &m1 , &m2 , &m3 , &att);
    getch();
    strcpy(c1[count].name , name);
    c1[count].m1 = m1;
    c1[count].m2 = m2;
    c1[count].m3 = m3;
    c1[count].att= att;  ;
    count++;
}

void pr(struct cr *c1)
{
    for (int i = 0 ; i < n ; i++)
    {
        printf("%s , %d , %d , %d , %f\n" ,c1[i].name , c1[i].m1 , c1[i].m2 , c1[i].m3 , c1[i].att);
    }

}