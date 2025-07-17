#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createtree(int data)
{
    struct node* tempnode = (struct node*)malloc(sizeof(struct node));
    // scanf("%d" , &(tempnode->data));
    tempnode->data = data;

    if (data == -1)
    {
        return NULL;
    }

    printf("enter data to be entered in the left of %d\n" , tempnode->data);
    int templeft , tempright;
    scanf("%d" , &(templeft));
    tempnode->left = createtree(templeft);


    printf("enter data to be entered in the right of %d\n" , tempnode->data);
    scanf("%d" , &(tempright));
    tempnode->left = createtree(tempright);

    return tempnode;
}

void inordertree(struct node* root)
{   
    if(root == NULL)
    {
        return;
    }
    printf("%d" , root->data);

    inordertree(root->left);
    inordertree(root->right);

}

struct node* inordertreecreation(int arr[]  , int start, int size )
{

    struct node* temproot = NULL;
    if(start < size)
    {
        temproot->data=arr[start];

        temproot->left = inordertreecreation(arr , 2*start+1 , size);
        temproot->right = inordertreecreation(arr , 2*start+2 , size);
    }
    return temproot;
}

int main()
{
    struct node* root = createtree(5);
    // inordertree(root);
}