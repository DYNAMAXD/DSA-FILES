#include<bits/stdc++.h>
using namespace std;

class node{
    public:

    int data;
    node* left;
    node* right;

    node(int n)
    {
        this->data = n;
        this->left = NULL;
        this-> right= NULL;
    }
};

node* createTree()
{
    int n;
    cin>> n;
    if(n == -1)return NULL;

    node* temp = new node(n);

    temp->left = createTree();
    temp->right = createTree();

    return temp;

}

void levelOrder(node* root)
{
    deque<node*> q;

    q.push_back(root);
    q.push_back(NULL);

    while(q.empty())
    {
        node* temp = q.front();
        q.pop_front();
        if(temp->left != NULL) q.push_back(temp->left);
        if(temp->right != NULL) q.push_back(temp->right);
    }
}

int heightOfTree(node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    return 1+ max(heightOfTree(root->left ) , heightOfTree(root->right));
}


int diameter(node* root)
{
    if(root == NULL)return 0;

    int o1 = diameter(root->left);
    int o2 = diameter(root ->right);
    int o3 = heightOfTree(root->left) + heightOfTree(root->right);

    return max(o1 , max(o2 , o3));
}
int dia = 0;
int fwHeight(node* root)
{
    if (root == NULL)return 0;

    int l = fwHeight(root->left);
    int r = fwHeight(root->right);

    dia = max(dia , l + r);

    return max(l ,  r) + 1;
}

int fastWay(node* root){
    // keep track of height of the tree on the way while calcualting the height of the tree
    //we are updating the height function itself , not any explicit things
    fwHeight(root);
    return dia;
}

int main(){
    node* root;

    root = createTree();
    return 0;
}