#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* makenode(int data)
{
    struct node* tempnode = (struct node*)malloc(sizeof(struct node));
    tempnode->data = data;
    tempnode->right = NULL;
    tempnode->left = NULL;
    return tempnode;
}

struct node* addroot(struct node* root , int data)
{
    if(root == NULL)
    {
        root = makenode(data);
        return root;
    }
    else if(data <= root->data)
    {
        root->left = addroot(root->left , data);
    }
    else if(data > root->data)
    {
        root->right = addroot(root->right , data);
    }
    return root;
}

void printbst(struct node* root)
{
    if(root == NULL)
    {
        return;
    }
    printbst(root->left);
    printf("%d  " , root->data);
    printbst(root->right);
    return;
}

int searchelement(struct node* root , int a)
{
    if(root == NULL)
    {
        return 0;
    }
    if(root->data == a)
    {
        return 1;
    }
    if(root->data > a)
    {
        return searchelement(root->left, a);
    }
    if(root->data < a)
    {
        return searchelement(root->right , a);
    }
}

int minelement(struct node* root)
{
    if(root->left == NULL)
    {
        return root->data;
    }
    return minelement(root->left);
}

int maxelement(struct node* root)
{
    if(root->right == NULL)
    {
        return root->data;
    }
    return maxelement(root->right);
}

void successor(struct node* root , int data)
{
    int su;
    while(root != NULL){
        if(root->data <= data)
        {
            root=root->right;
        }
        else{
            su = root->data;
            root = root->left;
        }
    }
    printf("%d" , su);
}

void predecessor(struct node* root , int data)
{   
    int pre = -1;
    while(root != NULL)
    {
        if(root -> data >= data)
        {
            root = root->left;
        }
        else
        {
            pre = root->data;
            root = root->right;
        }
    }
    printf("%d\n" , pre);
}

void deleteelement(struct node* root , int data)
{
   
   
}

int main()
{
    struct node* root = NULL;

    root = addroot(root , 1);
    root = addroot(root , 2);
    root = addroot(root , 5);
    root = addroot(root , 4);
    // printbst(root);
    // printf("%d" , searchelement(root , 1));
    // printf("%d" , minelement(root));
    // successor(root , 1);
    // predecessor(root , 1 b          1 1);
    // printf("%d" , maxelement(root));
}