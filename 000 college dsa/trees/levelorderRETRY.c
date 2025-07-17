#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createnode(int n)
{
    struct node* tempnode = (struct node*)malloc(sizeof(struct node));
    tempnode->data = n;
    tempnode->left = NULL;
    tempnode->right= NULL;
    return tempnode;
}

struct node* buildit(int n)
{
    struct node* root = NULL;
    int data;

    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d" , &data);
        if(root == NULL)
        {
            root = createnode(data);
        }
        else
        {
            struct node* temp = root;
            struct node* parent = NULL;

            while(1)
            {
                parent = temp;
                if(temp->left == NULL)
                {
                    temp = temp->left;
                    break;
                }
                else if(temp->right == NULL)
                {
                    temp = temp->right;
                    break;
                }
                else if(temp->left->left == NULL || temp->right->right == NULL)
                {
                    temp = temp->left;
                }
                else{
                    temp = temp->right;
                }
            }
            temp = createnode(data);
        }
    }
    
    return root;
}

struct node*build(int num){
    struct node* root = NULL;
    int data;
    for(int i = 0;i<num;i++){
        if(root == NULL){
            printf("Enter data: ");
            scanf("%d",&data);
            root = createnode(data);
        }
        else{
            struct node* temp = root;
            struct node* parent = NULL;
            while(temp != NULL){
                parent = temp;
                if(temp->left == NULL){
                    temp = temp->left;
                    break;
                }
                else if(temp->right == NULL){
                    temp = temp->right;
                    break;
                }
                else{
                    if(temp->left->left == NULL || temp->left->right == NULL){
                        temp = temp->left;
                    }
                    else{
                        temp = temp->right;
                    }
                }
            }   
            printf("Enter data after %d: ",parent->data);
            scanf("%d",&data);
            if(parent->left == NULL){
                parent->left = createnode(data);
            }
            else{
                parent->right = createnode(data);
            }
        }
    }
    return root;
}

int max(int a , int b)
{
    if(a > b)
    {
        return a;
    }
    return b;
}

int height(struct node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    return (max(height(root->left) , height(root->right)) + 1);
}

void printsamelevel(struct node* root , int height)
{
    if(height == 0)
    {
        return;
    }
    if (height == 1)
    {
        printf("%d" , root->data);
    }

    printsamelevel(root ->left , height-1);
    printsamelevel(root ->right, height-1);
}

void printlevel(struct node* root)
{
    int n = height(root);
    for(int i = 1 ; i <= n ; i++)
    {
        printsamelevel(root , i);
    }
}

struct node* buildtree(int arr[] , int n ,struct node* root, int start, int end)
{
    if(start < end){
        int data;
        scanf("%d" , &data);
        struct node* tempnode = createnode(data);

        root ->left = buildtree(arr , n , root->left , 2*start+1 , end);
        root ->right = buildtree(arr , n , root->right , 2*start+1 , end);
    }
    return root;
}

void printpostorder(struct node* root)
{
    if(root == NULL)
    {
        return;
    }

    printpostorder(root->left);
    printpostorder(root->right);
    printf("%d " , root->data);
}

int printsumoftree(struct node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    return printsumoftree(root->left) + printsumoftree(root->right) + root->data;
}


struct node* buildpreorder(struct node* root)
{

    if(root == NULL)
    {
        int n;
        scanf("%d" , &n);
        if(n == -1)
        {
            return NULL;
        }
        root = createnode(n);
    }
    if(root->left == NULL)
    {
    printf("enter the data to be inserted to the left of %d\n" , root->data);
    root->left = buildpreorder(root->left);

    }
    if(root->right == NULL)
    {
    printf("enter the data to be inserted to the right of %d\n" , root->data);
    root->right = buildpreorder(root->right);
    }
    // printf("enter the data to be inserted to the %d\n" , root->data);
    // buildpreorder(root);

}

struct node* buildtreelevelorder(struct node* root , int n)
{
    struct node* root =NULL;
    int tempdata;
    for(int i = 0 ; i < n ; i++)
    {
        if(root == NULL)
        {
            scanf("%d" , &tempdata);
            root = createnode(tempdata);
        }
        else
        {
            struct node* parent = null;
            struct node* temp = parent;
            if(temp != null)
            {
                while(1)
                {
                    if(temp->left == NULL)
                    {
                        scanf("%d" , &tempdata);
                        temp->left = createnode(tempdata);
                    }
                    else if(temp->right == NULL)
                    {
                        scanf("%d" , &tempdata);
                        temp->right = createnode(tempdata);
                    }
                    else if()
                    {
                        
                    }
                }
            }
        }
    }
}

int main()
{
    // struct node* root = buildit(5);
    
    struct node* root = NULL;
    root = buildpreorder(root);
    // printf("%d" , printsumoftree(root));
    // printpostorder(root);
    return 0;
} 