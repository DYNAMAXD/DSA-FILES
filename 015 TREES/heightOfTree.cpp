#include<bits/stdc++.h>
using namespace std;


class node{
    public:
    int data;
    node*left;
    node*right;

    node(int n)
    {
        this->data = n;
        left = NULL;
        right = NULL;
    }

    
};
node* createTree()
{ 
    int data;
    cin>>data; 

    if(data == -1){return NULL;}
    else{
        node* n = new node(data);

        //going left
        // cout<<"what will go in the left of ->" << data;
        n->left = createTree();
        //going right
        // cout<<"what will go in the right of ->" << data;
        n->right = createTree();
    }

}

int height(node* root)
{
    if(root == NULL)return 0;

    int left = height(root->left);
    int right = height(root->right);
    return 1+ max(left , right);

    
}

int main(){
    node* root;
    root = createTree();
    
    
    return 0;
}