#include<stdio.h>
#include<string.h>
struct library
    {
        int ascn;
        char auth[100];
        char title[100];
        float price;
        int flag;
    }lib1[7];

void addbook(struct library* lib1 , int* count , char tiitle[100] ,char auuth[100]);
void printlib(struct library* lib1 , int* count);
void displayascn(struct library* lib1 , int* count , int ascn);
void sameauth(struct library* lib1 , int* count , char* autho[100]);

int count = 0;

struct library lib1[7];


int main()
{

    while (2<3)
    {
        int choice;
        printf(" what do you want to do?")
        printf(" 1. Add book information\n")
        printf(" 2. Display book information\n")
        printf(" 3. List all the books of a given author\n")
        printf(" 4. List the title of the specified book\n")
        printf(" 5. List the count of books in the library\n")
        printf(" 6. List the books in the order of accession number\n")
        printf(" 7. Exit\n")

        scanf("%d" , &choice);
        if (choice == 1)        
    }


    addbook(lib1 , &count ,"ezio",  "auditore");
    // printlib(lib1 , &count);
    // displayascn(lib1 , &count , 23);
    sameauth(lib1 , &count ,"ezio");
}



void addbook(struct library* lib1 , int* count ,char auuth[100], char tiitle[100])
{   
    char auth[100] , title[100];
    scanf("%d",&lib1[*count].ascn );
    scanf("%f",&lib1[*count].price);
    scanf("%d",&lib1[*count].flag );
    strcpy(lib1[*count].auth , auuth);
    strcpy(lib1[*count].title , tiitle);
    *count = *count + 1;
}

void printlib(struct library* lib1 , int* count)
{
    for(int i = 0 ; i < *count ; i++)
    {
        printf("%d , %s , %s , %f , %d\n" , lib1[i].ascn , lib1[i].auth , lib1[i].title , lib1[i].price , lib1[i].flag);
    }
}

void displayascn(struct library* lib1 , int* count , int ascn)
{
    for(int i = 0 ; i < *count ; i++)
    {
         
        if(lib1[i].ascn == ascn)
        {
            printf("book found !\n");
            printf("author : %s\n" , lib1[i].auth);
            printf("title : %s\n" , lib1[i].title);
            printf("price : %f\n" , lib1[i].price);

            if (lib1[i].flag == 1)
            {
                printf("the book is currently issued\n");
            }
            else
            {
                printf("the book is not issued currently\n");
            }
        }
    }
}

void sameauth(struct library* lib1 , int* count , char* auth[100])
{
    for (int i = 0 ; i < *count ; i++)
    {
        int equal = strcmp(lib1[i].auth , auth);
        printf("the books are as follows");
        if (equal == 0)
        {
            printf("%s\n" , lib1[i].title);
        }
        
    }
}

