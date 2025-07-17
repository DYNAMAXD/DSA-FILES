#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

struct node* head;
struct node* tail;

void insertat(int insertdata)
{
    struct node* temp = (struct node*)malloc(1 * sizeof(struct node));
    // printf("temp here->>%p\n\n" , temp);
    temp->data = insertdata;
    temp->next = tail->next;
    tail->next = temp;
    tail = temp; 
}

void printcll()
{
    struct node* temp = tail->next;

    while(1)
    {
        if(temp == tail)
        {
            break;
        }
        printf("%d" , temp->data);
        temp=temp->next;
    }
    printf("%d  " , temp->data);

}

int main()
{
    
    struct node* node1 = (struct node*)malloc(1 * sizeof(struct node));
    node1->data = 4;
    node1->next = node1;
    tail = node1;

    insertat(5);
    insertat(6);
    insertat(7);
    insertat(8);
    printcll(tail);

}