#include<stdio.h>
#include<string.h>
struct bank 
{
    int acn;
    char name[100];
    int balance;
};

int count = 0;

void below100(struct bank* b1 , int* count);
void deposit(struct bank* b1 , int* count , int acn, int amount);
void withdraw(struct bank* b1 , int* count , int acn, int amount);
void details(struct bank* b1 , int* count , int acn);


void main()
{

    struct bank b1[200];
    for (int i = 0 ; i < 12 ; i++)
    {
        b1[i].acn = i;
        strcpy(b1[i].name ,"asdf");
        b1[i].balance = i + 85;
    }

    count = 12;

    // below100(b1 , &count);   
    // deposit(b1 , &count , 2 , 100000);
    // below100(b1 , &count);   
    details(b1 , &count , 4);
    withdraw(b1 , &count , 4 , 80);

    
}


void below100(struct bank* b1 , int* count)
{
    for(int i = 0 ; i < *count ; i++)
    {
        if (b1[i].balance < 100) 
        {
            printf("%d\n" , b1[i].acn);
            printf("%s\n" , b1[i].name);
            printf("%d\n" , b1[i].balance);   
        }
    }
}

void deposit(struct bank* b1 , int* count , int acn, int amount)

{
    for(int i = 0 ; i < *count ; i++)
    {
        if (b1[i].acn == acn) 
        {
            b1[i].balance += amount;   
        }
    }
}

void withdraw(struct bank* b1 , int* count , int acn, int amount)
{
    for(int i = 0 ; i < *count ; i++)
    {
        if (b1[i].acn == acn) 
        {
            if (b1[i].balance -100 < amount )
            {
                printf("NO SUFFICIENT FUNDS");
            }   
            else
            {
                b1[i].balance -= amount;
            }
        }
    }
}

void details(struct bank* b1 , int* count , int acn)
{
    for(int i = 0 ; i < *count ; i++)
    {
        if (b1[i].acn == acn)
        {
            printf("%d\n" , b1[i].acn);
            printf("%s\n" , b1[i].name);
            printf("%d\n" , b1[i].balance);   
        }
    }
}