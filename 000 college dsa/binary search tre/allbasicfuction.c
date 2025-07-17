#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int data;
    int freq;
    struct node* left;
    struct node* right;
};

struct node* createnode(int data)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->freq = 1;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

// struct node* createbst(struct node* root)
// {
//     printf("enter the data to be inserted");
//     int data;
//     scanf("%d" , &data);
//     if(data == -1)
//     {
//         return NULL;
//     }
//     if(root == NULL)
//     {
//         root = createnode(data);
//         createbst(root);
//     }
//     if(root->data > data)
//     {
//         root->left = createbst(root->left);
//         // createbst(root->left);
//     }
//     else
//     {
//         root->right = createbst(root->right);
//         // createbst(root->right);
//     }
//     return root;
// }

struct node* insertnode(struct node* root , int data)
{
    if(root == NULL)
    {
        return createnode(data);
    }
    if(root->data!= data)
    {
        if(root->data > data)
        {
            root->left = insertnode(root->left , data);
        }
        else
        {
            root->right = insertnode(root->right , data);
        }
    }

    if(root->data == data)
    {
        root->freq = root->freq+1;
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
    printf("%d-%d\n" , root->data , root->freq);
    printbst(root->right);
}


int main()
{
    struct node* root  = NULL;
    root = insertnode(root , 4);
    root = insertnode(root , 4);
    root = insertnode(root , 4);
    root = insertnode(root , 4);
    root = insertnode(root , 4);
    root = insertnode(root , 5);
    root = insertnode(root , 5);
    root = insertnode(root , 5);
    root = insertnode(root , 5);
    root = insertnode(root , 5);
    root = insertnode(root , 7);
    root = insertnode(root , 7);
    root = insertnode(root , 7);
    root = insertnode(root , 7);
    root = insertnode(root , 7);
    root = insertnode(root , 9);
    root = insertnode(root , 23);
    root = insertnode(root , 45);
    root = insertnode(root , 90);
    root = insertnode(root , 90);

    // printf("%d" , root->data);
    printf("%d" , strcmp("b" , "a"));
    printbst(root);
}



/*
struct insertnode(root , int data)
{
    if(root == null) 
    {
    root = createnode(data)
    }

    if(root->data > data)
    {
    root->left = insertnode(root->left ,  data)
    }
    else
    {
    root->right = insertnode(root->right , data)
    }

}
*/