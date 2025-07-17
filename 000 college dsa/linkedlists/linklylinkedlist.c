#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node* prev;
    int data;
    struct node* next;
};

struct node* head;
struct node* tail;

void insertathead(int data)
{
    struct node* tempnode = (struct node*)malloc(1 * sizeof(struct node));
    // struct node tem
    // printf("%p , %p\n" , tempnode , head);
    tempnode->data = data;
    tempnode->next = head;
    tempnode->prev = NULL;
    head -> prev = tempnode;
    head = tempnode;
}

void insertattail(int data)
{
    struct node* tempnode = (struct node*)malloc(1 * sizeof(struct node));
    tempnode->data = data;
    tail->next = tempnode;
    tempnode->prev = tail;
    tempnode->next = NULL;
    tail = tempnode;
}

void insertatrandom(int pos , int data)
{
    if(pos == 0)
    {
        insertathead(data);
        return;
    }

    struct node* temp = head;
    struct node* pre = NULL;
    struct node* tempnode = (struct node*)malloc(1 * sizeof(struct node));

    for(int i = 0 ; i < pos; i++)
    {
        pre = temp;
        temp = temp->next;
    }

    if(temp->next == NULL)
    {
        tail = tempnode;
    }
    tempnode->data = data;
    temp->prev = tempnode;
    tempnode -> next = temp;
    pre->next = tempnode;
    tempnode->prev = pre;
}

void deleteat(int pos)
{
    struct node* temp = head;
    struct node* pre = NULL;

    if(pos == 0)
    {
        temp = temp->next;
        temp->prev = NULL;
        head = temp;
        return;
    }

    for(int i = 0 ; i < pos ; i++)
    {
        pre = temp;
        temp = temp->next;
    }

    if(temp->next == NULL)
    {
        pre->next =NULL;
        tail = pre;
        return;
    }

    // printf("%d , %d" , pre->data , temp->data);
    // if()
    temp = temp->next;
    pre->next = temp;
    temp->prev = pre;
    
}

void printlist()
{
    struct node* temp = head;
    while(temp != NULL)
    {
        printf("%d  " , temp->data);
        temp = temp->next;
    }
}

int main()
{
    struct node node1;
    head = &node1;
    tail = &node1;
    node1.data = 10;
    node1.prev = NULL;
    node1.next = NULL;
    insertathead(23);
    insertathead(54);
    insertathead(67);


    insertattail(90);
    insertattail(80);
    insertattail(70);

    insertatrandom(3 , 45);
    insertatrandom(0 , 78);
    printlist();
    printf("\n");

    deleteat(0);
    deleteat(7);
    deleteat(6);
    printlist();
    printf("\n");
}
