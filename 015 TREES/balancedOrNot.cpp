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

bool flag = true;
int height(node* root)
{
    if(root == NULL)return 0;

    int l = height(root->left);
    int r = height(root->right);
        
    if(abs(l-r) >= 2 ) flag = false;
    
    return 1 + max(l , r);
}

bool isBalanced(node* root) {
    height(root);
    return flag;
}
 
int main(){
    node* root;
     
    root = createTree();
      
}