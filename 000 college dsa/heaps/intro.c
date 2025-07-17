#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;    
};

int heap[1000];

int ptr = 0;

//making max heap           
void insert()
{
    int n;
    scanf("%d" , &n);
    ptr++;
    heap[ptr] = n;

    int temp = ptr;
    while(1)
    {
        if(heap[temp] > heap[temp/2] && temp>1)
        {
            int a , b;
            a = heap[temp];
            b = heap[temp/2];
            printf("now swapping %d , %d\n\n" , a , b);
            heap[temp/2] = a;
            heap[temp] = b;
            temp = temp/2;
        }
        else
        {
            break;
        }
    }
}

//min heap

// void insert()
// {
//     int n;
//     scanf("%d" , &n);
//     ptr++;
//     heap[ptr] = n;
//     int temp = ptr;
//     while(1)
//     {
//         if(heap[temp] < heap[temp/2] && temp>1) ## changes here
//         {
//             int a , b;
//             a = heap[temp];
//             b = heap[temp/2];
//             printf("now swapping %d , %d\n\n" , a , b);
//             heap[temp/2] = a;
//             heap[temp] = b;
//             temp = temp/2;
//         }
//         else
//         {
//             break;
//         }
//     }
// }

// void printheap()
// {
//     for(int i = 0 ; i < ptr ; i++)
//     {
//         printf("%d  -->" , heap[i]);
//     }
// }


void printheap()
{
    for(int i = 0 ; i < ptr ; i++)
    {
        printf("%d  -->" , heap[i]);
    }
}
int main()
{
    heap[0] = 9999;
    insert();
    insert();
    insert();
    insert();
    insert();
    
    
    

    printheap();
}