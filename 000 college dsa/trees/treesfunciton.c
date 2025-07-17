#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* Create(int data){
    struct node* root = (struct node*)malloc(sizeof(struct node));
    root->data = data;
    root->left = NULL;
    root->right = NULL;
    return root;
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

void inorder(struct node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    printf("%d  ",root->data);
    inorder(root->right);
}

void preorder(struct node* root){
    if(root == NULL){
        return;
    }
    printf("%d  ",root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d  ",root->data);
    
}


int main(){
    int num;
    printf("Enter the number of nodes:  ");
    scanf("%d",&num);
    struct node* root = Build(num);
    int h = height(root);
    //printf("%d ",h);
    LevelOrderTraversal(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    inorder(root);
    return 0;
}