#include<stdio.h> 

int front = -1;
int rear = -1;
int n;
void printarr(int* arr )
{ 
    for(int i = 0 ; i < n ; i++)
    {   
        printf("%d " , arr[i]);
    }
    printf("\n");
}


void push_front(int * arr ,   int num  )
{
    //initial case
    if(front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        arr[front] = num;
    }
    //overflow \n
    else if(front == rear +1)
    {
        printf("front overflow \n");
    }
    //circular thing
    else if(front == 0 && rear < n-1)
    {
        front = n-1;
        arr[front] = num;
    }
    //normal case
    else{
        front--;
        arr[front] = num;
    }
    
}

void push_back(int * arr ,   int num )
{ 
    //initial case
    if(front == -1 && rear == -1)
    {
        front = 0;
        rear=0;
        arr[rear] = num;
    }
    //overflow \n
    else if(front == rear + 1)
    {
        printf("back overflow \n");
    }
    //circular motion
    else if(rear == n-1 && front != 0)
    {
        rear = 0;
        arr[rear] = num;
    }
    //normal movement
    else{
        rear++; 
        arr[rear] = num;
    }
}

void pop_front(int * arr)
{
    if(front == -1 && rear == -1)
    {
        printf("front underflow \n");
    }
    //underflow \n
    if(front == rear)
    {
        arr[front] = -1;
        front = -1;
        rear = -1;
    }
    //circular motion
    else if(front == n-1)
    {
        arr[front] =-1;
        front = 0;
    }
    //normal
    else
    {
        arr[front] = -1;
        front++;
    }
}

void pop_back(int * arr )
{
    if(front == -1 && rear == -1)
    {
        printf("back underflow \n");

    }
    //underflow \n
    if(front == rear)
    {
        arr[front] = -1;
        front = -1;
        rear = -1;
    }
    //circular motoin
    else if(rear == 0)
    {
        arr[rear] = -1;
        rear = n-1;
    }
    //normal
    else
    {
        arr[rear] = -1;
        rear--;
    }
}


int main()
{
    n = 10;
    // scanf("%d" , &n);

    int arr[n];

    for(int i = 0 ; i < n ;i++)
    {
        arr[i] = 0;
    }
 
    printf("\n\npush backs \n");
    push_back(arr , 10);
    push_back(arr , 20);
    push_back(arr , 30);
    push_back(arr , 40); 
    push_back(arr , 50); 
    
    printarr(arr);
    
    printf("\n\npush fronts \n");
    push_front(arr , 110);
    push_front(arr , 120);
    push_front(arr , 130);
    push_front(arr , 140);
    push_front(arr , 150);
    
    printarr(arr);
    
    printf("\n\noverflow condition\n");
    push_back(arr , 150);
    push_front(arr , 150); 
    
    printf("\n\npop backs \n");
    pop_back(arr);
    pop_back(arr);
    pop_back(arr);
    pop_back(arr);
    pop_back(arr);
    pop_back(arr);
    pop_back(arr);
    pop_back(arr);
    pop_back(arr);
    pop_back(arr);
    printarr(arr);
    
    printf("\n\npop fronts \n");
    pop_front(arr);
    pop_front(arr);
    pop_front(arr);
    printarr(arr);
    
}