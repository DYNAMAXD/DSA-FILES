#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* solve(TreeNode* root, TreeNode* p, TreeNode* q)
{
    if(root == NULL)return NULL;

    if(root == p)return p;
    //jab tak ni mila , yehi answer hai , isko uppar bhejo
    if(root == q)return q;
    //jab tak ni mila , yehi answer hai , isko uppar bhejo

    TreeNode* left = solve(root->left , p , q);
    TreeNode* right = solve(root->right , p , q);

    if(left == NULL && right ==NULL)return NULL;
    else if(left !=NULL && right ==NULL)return left;
    else if(right != NULL && left == NULL)return right;
    else if(left != NULL && right != NULL)return root;  //ye case mai bhul jaata hu
    //ki agar dono mil gaye hai ,to root hi LCA  hai , to isko hi uppar forward kardo
    return NULL;
}

int main(){
    
    return 0;
}