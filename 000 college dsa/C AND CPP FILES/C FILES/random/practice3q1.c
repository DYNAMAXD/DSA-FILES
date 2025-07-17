#include<stdio.h>
struct library 
{
    int ascn;
    char title[100];
    char auth[100];
    float price;
    int flag;
};

int main()
{
    int n , count;
    printf("enter the size of library\n");
    scanf("%d" , &n);
    struct library lib1[n];

    while (3 < 5)
    {
        int choice;
        printf("1. Add book information\n");
        printf("2. Display book information\n");
        printf("3. List all the books of a given author\n");
        printf("4. List the title of the specified book\n");
        printf("5. List the count of books in the library\n");
        printf("6. List the books in the order of accession number\n");
        printf("7. Exit\n");
        printf("what you want to do??\n");
        scanf("%d" , &choice);

        if (choice == 1)
        {
            printf("Enter the value of ascession number\n");
            scanf("%d/n" , &lib1[count].ascn);
            printf("Enter the title of the book\n");
            gets(lib1[count].auth);
            printf("Enter the Author of the book\n");
            gets(lib1[count].title);
            printf("Enter the value of price\n");
            scanf("%f/n" , &lib1[count].price);
            printf("Enter the value of flag (1 for issued , 0 for not issued)\n");
            scanf("%d/n" , &lib1[count].flag);
            count+=1;
        }

        if(choice == 7)
        {
            break;
        }
        break;
    }
}

// void addi(struct library lib , int count)
// {
//     printf("Enter the accession number");
//     scanf("%d" , &lib[count].ascn);
// }