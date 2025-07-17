#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* head = NULL;
struct node* tail = NULL;

void insertathead(int data)
{
    struct node* tempnode = (struct node*)malloc(1 * sizeof(struct node));
    tempnode->data = data;
    tempnode->next = head;
    head = tempnode;

    // struct node tempnode;
    // tempnode.data = data;
    // tempnode.next = head;
    // head = &tempnode;
}

void insertattail(int data)
{
    struct node* tempnode = (struct node*)malloc(1 * sizeof(struct node*));
    tempnode->data = data;
    tempnode->next = NULL;
    tail -> next = tempnode;
    tail = tempnode;
}

void insertatrandom(int pos , int data)
{
    struct node* tempnode = (struct node*)malloc(1 * sizeof(struct node));
    struct node* temphead = head;
    tempnode -> data = data;
    if(pos == 0)
    {
        insertathead(data);
        return;
    }
    for(int i = 0 ; i < pos-1; i++)
    {
        temphead = temphead -> next;
    }

    if(temphead -> next == NULL)
    {
        insertattail(data);
        return;
    }

    tempnode -> next = temphead->next;
    temphead->next = tempnode;

}

void deleteat(int pos)
{
    if(pos == 0)
    {
        head = head -> next;
    }
    else
    {
        struct node* temphead = head;
        struct node* prevhead = head;
        for(int i = 0 ; i < pos ; i++)
        {
            prevhead = temphead;
            temphead = temphead->next;
        }
        if(temphead ->next == NULL)
        {
            tail = prevhead;
        }
        prevhead->next = temphead->next;
    }


}

void printllist()
{
    int n = 4;
    struct node* temphead = head;
    while(temphead != NULL)
    {
        printf("%d  " , temphead->data);
        temphead = (temphead->next);
    }
    printf("\n");
}

int main()
{
    // struct node* node1 = malloc(sizeof(struct node));
    // node1 ->data = 10;
    // node1 ->next = NULL;

    struct node node1;
    node1.data = 10;
    node1.next = NULL;

    head = &node1;
    tail = &node1;
    insertathead(23);
    insertattail(346);
    insertathead(34);
    insertattail(49);
    printllist();
    deleteat(3);
    printllist();
    
    insertatrandom(5, 99);
}