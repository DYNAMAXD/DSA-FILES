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
    struct node* temp =(struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

// int sumoftree(struct node* root)
// {
//     if(root == NULL)
//     {
//         return 0;
//     }
//     int ans = sumoftree(root->left) + root->data + sumoftree(root->right);
//     return ans;
// }

struct node* createlevelorderarraymethod(int arr[] , int start , int end)
{
    struct node* temp = NULL;
    if(start < end)
    {
        temp = createnode(arr[start]);
        temp->left = createlevelorder(arr , 2*start + 1 , end);
        temp->right = createlevelorder(arr , 2*start + 2 , end);
    }
    return temp;
}

struct node* Build(int num){
    struct node* root = NULL;
    int data;
    for(int i = 0;i<num;i++){
        if(root == NULL){
            printf("Enter data: ");
            scanf("%d",&data);
            root = Create(data);
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
                parent->left = Create(data);
            }
            else{
                parent->right = Create(data);
            }
        }
    }
    return root;
}


struct node* insertlevelorder(int n)
{
    struct node* root = NULL;
    int data;
    for(int i = 0 ; i < n ; i++)
    {
        if(root == NULL)
        {
            scanf("%d" , &data);
            root = createnode(data);
        }
        else
        {


            root = NULL;
            struct node* temp = root;


            while(1)
            {
                root = temp;
                if(temp->left == NULL)
                {
                    temp = temp->left;
                    break;
                }
                else if(temp->right = NULL)
                {
                    temp = temp->right;
                    break;
                }
                else if((temp->left->left == NULL )||( temp->left->right = NULL))
                {
                    temp = temp->left;
                    break;
                }
                else
                {
                    temp = temp->right;
                    break;
                }
            }



            printf("enter the data to be entered after %d" , root->data);
            scanf("%d" , &data);
            if(root->left == NULL)
            {
                root->left = createnode(data);
            }
            else
            {
                root->right = creatnode(data);
            }

        }
    }
}



int height(struct node* root){
    if(root == NULL){
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    if(lh>rh){
        return lh+1;
    }
    else{
        return rh+1;
    }
}

void printlevel(struct node* root,int lev){
    if(root == NULL){
        return;
    }
    if(lev == 1){
        printf("%d ",root->data);
        return;
    }
    printlevel(root->left,lev-1);
    printlevel(root->right,lev-1);

}



void LevelOrderTraversal(struct node*root){
    int levels = height(root);
    for(int i = 1;i<=levels;i++){
        printlevel(root,i);
    }
}


int main()
{
    struct node* root = Build(5);
    
    LevelOrderTraversal(root);

}