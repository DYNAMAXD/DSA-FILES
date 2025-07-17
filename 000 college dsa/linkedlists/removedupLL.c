#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

void insertathead(struct node** head , int data)
{
    struct node* temp = (struct node*)malloc(1 * sizeof(struct node));
    temp->data = data;
    temp->next = *head;
    (*head) = temp;
}

void insertattail(struct node** tail , int data)
{
    struct node* temp = (struct node*)malloc(1 * sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    (*tail)->next = temp;
    (*tail) = temp;
};

void printll(struct node* head , struct node* tail)
{
    while(head != NULL)
    {
        printf("%d " , head->data);
        head = head->next;
    }
}

void sortedinsert(struct node** head , struct node** tail , int data)
{
    struct node* temp = (*head);

    if(temp->data > data)
    {
        insertathead(head , data);
    }
    else if((*tail)->data < data)
    {
        insertattail(tail , data);
    }
    else
    {
        while(temp -> data < data)
        {
            if (temp->next->data > data)
            {
                break;
            }
            temp = temp->next;
        }
        struct node* tempnode = (struct node*)malloc(1 * sizeof(struct node));
        tempnode->data = data;
        tempnode->next = temp->next;
        temp->next = tempnode;
        
    }
}

int main()
{
    struct node* node1 = (struct node*)malloc(1 *  sizeof(struct node));
    node1->data = 4;
    struct node* head = node1;
    struct node* tail = head;

    sortedinsert(&head , &tail , 15);
    sortedinsert(&head , &tail , 15);
    sortedinsert(&head , &tail , 3);
    sortedinsert(&head , &tail , 2);
    sortedinsert(&head , &tail , 12);
    sortedinsert(&head , &tail , 20);
    printll(head , tail);
}
