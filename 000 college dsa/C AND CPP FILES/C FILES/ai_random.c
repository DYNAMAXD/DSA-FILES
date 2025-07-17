#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    int id;
    char name[20];
    struct Date *dob;  // This is a pointer to the nested structure
};

int main() {
    struct Student *studentPtr;

    studentPtr = (struct Student *) malloc(sizeof(struct Student));

    studentPtr->dob = (struct Date *) malloc(sizeof(struct Date));

    studentPtr->id = 1;
    strcpy(studentPtr->name, "John Doe");
    studentPtr->dob->day = 15;
    studentPtr->dob->month = 7;
    studentPtr->dob->year = 1990;

    // Print the data
    printf("ID: %d\n", studentPtr->id);
    printf("Name: %s\n", studentPtr->name);
    printf("Date of Birth: %d-%d-%d\n", studentPtr->dob->day, studentPtr->dob->month, studentPtr->dob->year);

    // Don't forget to free the memory
    free(studentPtr->dob);
    free(studentPtr);

    return 0;
}
