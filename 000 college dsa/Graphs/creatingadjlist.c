#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

struct adjnode
{
    int data;
    struct adjnode* next;
};

struct adjnode* createnode(int data)
{
    struct adjnode* temp = (struct adjnode*)malloc(sizeof(struct adjnode));
    temp->data = data;
    temp->next= NULL;
    return temp;
}

void addnode(struct adjnode* head , int data)
{   
    struct adjnode* temp1 = head;
    while(temp1->next != NULL)
    {
        temp1 = temp1 -> next;
    }
    struct adjnode* temp = createnode(data);
    temp1->next = temp;
}

void addedge(struct adjnode* list[] , int a , int b )
{
    addnode(list[a-1] , b);
    addnode(list[b-1] , a);
}

void printll(struct adjnode* head)
{
    printf("%d" , head->data);
    while(head != NULL)
    {
        printf("%d" , head->data);
        head = head->next;
    }
}

void printlinkedlist(struct adjnode* list[] , int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d :  " , i);
        printll(list[i]);
        printf("\n");
    }
}


void addedgematrix(int** matrix, int a , int b , int weight)
{
    matrix[a][b] = weight;
    matrix[b][a] = weight;
}

int ** creatematrix(int size)
{
    int** matrix = (int **)malloc(size * sizeof(int*));

    for(int i = 0 ; i < size ; i++)
    {
        matrix[i] = (int *)calloc(size , sizeof(int));
    }
    return matrix;
}

void printmatrix(int ** matrix ,int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0  ; j < n ; j++)
        {
            printf("%d  " , matrix[i][j]);
        }
            printf("\n");
    }
}

void bfs(int**matrix,int start,int size){
    int* visited = (int*)calloc(size,sizeof(int));
    int* queue = (int*)malloc(size*sizeof(int));
    int front = 0;
    int rear = 0;
    visited[start] = 1;
    queue[rear++] = start;
    while(front<rear){
        int current = queue[front++];
        printf("%d ",current);
        for(int i = 0;i<size;i++){
            if(matrix[current][i] != 0 && !visited[i]){
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }
}

void dfsutil(int** matrix,int start,int*visited,int size){
    if(!visited[start]){
        visited[start]=1;
        printf("%d ",start);
        for(int i=0;i<size;i++){
            if(matrix[start][i]!=0){
                dfsutil(matrix,i,visited,size);
            }
        }
    }
}

void dfs(int** matrix,int start,int size){
    int* visited = (int*)calloc(size,sizeof(int));
    printf("DFS: \n");
    dfsutil(matrix,start,visited,size);
    printf("\n");
}

bool dfsutilcycle(int** matrix,int start,int*visited,int size,int parent){
    visited[start] = 1;
    for(int i = 0;i<size;i++){
        if(matrix[start][i] != 0 && !visited[i]){
            if(dfsutilcycle(matrix,i,visited,size,start)){
                return true;
            }
        }
        else if(matrix[start][i]!= 0 && i != parent){
            return true;
        }
    }
    return false;
}

void dfscycle(int** matrix,int start,int size){
    int* visited = (int*)calloc(size,sizeof(int));
    visited[start] = 1;
    printf("DFScycle: \n");
    bool ans = dfsutilcycle(matrix,start,visited,size,-1);
    printf("ans: %d\n",ans);
}

int main()
{
    int** matrix = creatematrix(6);
    addedgematrix(matrix ,1 , 2 , 4);
    addedgematrix(matrix ,1 , 3 ,5);
    addedgematrix(matrix ,2 , 4 ,5);
    addedgematrix(matrix ,2 , 5 ,5);
    dfs(matrix,1,6);
    dfscycle(matrix,1,6);
}