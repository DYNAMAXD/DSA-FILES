#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createnode(int data)
{
    struct node* temproot = (struct node*)malloc(1 * sizeof(struct node));
    temproot->data = data;
    temproot->left = NULL;
    temproot->right = NULL;
    return temproot;
}

struct node* buildtree(struct node* root)
{
    int n;
    printf("enter data:");
    scanf("%d" , &n);
    
    struct node* temproot = createnode(n);

    if(n == -1)
    {
        return NULL; 
    }

    printf("enter data for left of %d\n" , n);
    temproot->left = buildtree(temproot->left);

    printf("enter data for right of %d\n" , n);
    temproot->right = buildtree(temproot->right);
    return temproot;
}

void inordertraverse(struct node* root)
{
    if(root == 0)
    {
        return;
    }
    inordertraverse(root->left);
    printf("%d " , root->data);
    inordertraverse(root->right);
}

void preorder(struct node* root)
{
    if(root == NULL)
    {
        return;
    }
    printf("%d " , root->data);
    preorder(root-> left);
    preorder(root->right);
}



int max(int a , int b)
{
    if(a > b)
    {
        return a;
    }
    return b;
}

int height(struct node* temp)
{
    if(temp == NULL)
    {
        return 0 ;
    }
    return 1 + max(height(temp->left) , height(temp->right));
}

int main()
{
    struct node* root = NULL;
    // 1 2 -1 -1 2 -1 -1
    root = buildtree(root);
    // preorder(root);
    // printf("\n");
    // inordertraverse(root);
    // printf("%d" , root->data);
    printf("%d" , height((root)));
    return 0;
}