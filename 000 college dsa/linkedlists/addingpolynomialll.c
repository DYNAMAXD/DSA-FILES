#include<stdio.h>
#include<stdlib.h>
struct node
{
    int co;
    int exp;
    struct node* next;
};


void insertathead(struct node** head  , int co , int exp)
{
    struct node* temp = (struct node*)malloc(1 * sizeof(struct node));
    temp->co = co;
    temp->exp =  exp;
    temp->next = *head;
    *head = temp;
}

void insertnode(struct node** head , struct node**tail , int co , int exp)
{
    struct node* temp0 = *head;
    if(*head == NULL || temp0-> exp < exp )
    {
        insertathead(head , co , exp);
        *tail = *head;
    }
    else
    {
        struct node* temp = *head;
        while(temp->exp > exp)
        {
            if(temp -> next == NULL || temp->next->exp < exp)
            {
                break;
            }

            temp = temp->next;
        }
        struct node* newnode = (struct node*)malloc(1 * sizeof(struct node));
        if(temp -> next == NULL)
        {
            *tail = newnode;
        }
        newnode -> co = co;
        newnode -> exp = exp;
        newnode -> next = temp -> next;
        temp->next = newnode;
    }
}

void printll(struct node* head )
{
    struct node* temp = head;
    while(temp->next != NULL)
    {
        printf("(%d*x^%d) +" , temp->co , temp->exp);
        temp = temp->next;
    }
        // temp = temp->next;
        printf("(%d*x^%d)" , temp->co , temp->exp);
}

struct node* addpoly(struct node* head1 , struct node * head2)
{
    struct node* head3 = NULL;
    struct node* tail3 = NULL;

    while(head1 != NULL && head2 != NULL)
    {
        if(head1-> exp == head2-> exp)
        {
            insertnode(&head3 , &tail3 , head1->co + head2->co , head1->exp);
            head1 = head1->next;
            head2 = head2->next;
        }
        else if(head1-> exp > head2 -> exp)
        {
            insertnode(&head3 , &tail3 , head1->co , head1->exp);
            head1 = head1->next;
            
        }
        else
        {
            insertnode(&head3 , &tail3 , head2->co , head2->exp);
            head2 = head2->next;
        }
    }
    while(head1 != NULL)
    {
        insertnode(&head3 , &tail3 , head1->co , head1->exp);
        head1 = head1->next;

    }
    while(head2 != NULL)
    {
        insertnode(&head3 , &tail3 , head2->co , head2->exp);
        head2 = head2->next;
    }
    // printf("\n");
    // printll(head3);
    return head3;
}


int main()
{
    // struct node* head1 = (struct node*)malloc(1 * sizeof(struct node));
    struct node* head1 = NULL;
    struct node* tail1 = NULL;
    int n1;
    scanf("%d" ,&n1);
    for(int i = 0 ; i<n1 ; i++ )
    {
        int a , b;
        scanf("%d %d" , &a , &b);
        insertnode(&head1 , &tail1 ,a , b );
    }

    printll(head1 );
    
    printf("\n");

    struct node* head2 = NULL;
    struct node* tail2 = NULL;

    int n2;
    scanf("%d" , &n2);
    for(int i = 0 ; i<n2 ; i++ )
    {
        int a , b;
        scanf("%d %d" , &a , &b);
        insertnode(&head2 , &tail2 ,a , b );
    }
    printll(head2 );

    struct node* head3 = addpoly(head1 , head2);
    printf("\n");
    printll(head3);

}