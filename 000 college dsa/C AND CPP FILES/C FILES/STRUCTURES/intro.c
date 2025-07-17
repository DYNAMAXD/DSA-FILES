#include<stdio.h>
#include<string.h>
struct std
{
    int rn;
    char fname[100];
    char lname[100];
    int m1;
};

struct std class10[3];

void cube(struct std* class);
void entry(struct std* class , int* count );
int count = 0;


void main()
{
    entry(class10 , &count);
    // cube(class10);
}

void cube(struct std* class)
{
    printf("%s" , class[0].lname);
}

void entry(struct std* class , int* count )
{
    char fname[100] , lname[100];
    int rn , m1 ;
    scanf("%d" , &rn);
    scanf("%d" , &m1);
    fgets(fname, 100, stdin); // read first name
    fgets(lname, 100, stdin); // read last name
    // gets(fname);
    // gets(lname);
    printf("%d , %d , %s " ,rn , m1, fname);
    
    class10[0].rn = rn;
    class10[0].m1 = m1;
    // strcpy(class10[0].fname, fname);
    // strcpy(class10[0].lname, lname);
    *count = *count + 1;
}