#include<stdio.h>

struct node* head1;
struct node* head2;
struct node* head3;

struct node* tail1;
struct node* tail2;
struct node* tail3;


struct node
{
    int data;
    int next;
};

void insertatend(struct node* tail , int arg)
{
    struct node* temp = (struct node*)malloc(1 * sizeof(struct node));
    temp->data=arg;
    tail->next = temp;
    tail = tail->next;
}

int main()
{

}