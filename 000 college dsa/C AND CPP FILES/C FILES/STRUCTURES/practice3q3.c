#include<stdio.h>
#include<string.h>

struct patientinfo 
{
    char name[100];
    char add[200];
    int phone;
    char gender[10]; 
    int hindex;
};

int count = 0;

void regi(struct patientinfo* h1 ,int* count, char name[100] , char add[200] , int phone , char gender[10] , int hindex);
void details(struct patientinfo* h1 ,int* count, int phone);
void sorting(struct patientinfo* h1 ,int* count , int* s1[50] , int*s2[50] , int*s3[50]);

int s1[50] , s2[50] , s3[50];
void main()
{
    int n;
    scanf("%d" , &n);
    struct patientinfo h1[n];  

    regi(h1 , &count , "asfd" , "iluh" , 2343234, "attack helicopter" , 3) ;
    regi(h1 , &count , "asfd" , "iluh" , 2343234, "attack helicopter" , 3) ;
    regi(h1 , &count , "asfd" , "iluh" , 2343234, "attack helicopter" , 3) ;

}

void regi(struct patientinfo* h1 ,int* count, char name[100] , char add[200] , int phone , char gender[10] , int hindex)
{
    strcpy(h1[*count].name , name);
    strcpy(h1[*count].add  , add);
    strcpy(h1[*count].gender , gender);
    h1[*count].phone = phone;
    h1[*count].hindex = hindex;
    *count = *count + 1;
}

void details(struct patientinfo* h1 ,int* count, int phone)
{
    for(int i = 0 ; i < *count ; i++)
    {
        if (h1[i].phone = phone)
        {
            printf("%s", h1[i].name);
            printf("%s", h1[i].add);
            printf("%s", h1[i].gender);
            printf("%i", h1[i].hindex);
        }
    }
}

void sorting(struct patientinfo* h1 ,int* count , int* s1[50] , int*s2[50] , int*s3[50])
{   
    int cs1 = 0 , cs2  = 0, cs3 = 0;
    for(int i = 0 ; i < *count ; i++)
    {
        if (h1[i].hindex = 5)
        {   
            if (cs1 > 49)
            {
                printf("no more appointments for s1 slot");
            }
            else{
            s1[cs1] = h1[i].phone;
            cs1++;}
        }
        if (h1[i].hindex = 4)
        {
            if (cs2 > 49)
            {
                printf("no more appointments for s2 slot");
            }
            else{
            s1[cs2] = h1[i].phone;
            cs2++;}
        }
        else
        {
            if (cs3 > 49)
            {
                printf("no more appointments for s3 slot");
            }
            else{
            s1[cs3] = h1[i].phone;
            cs3++;}
        }
    }
}