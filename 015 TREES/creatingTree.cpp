#include<bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int a)
    {
        this->data = a;
        this->left = NULL;
        this->right = NULL;
    }
};

node* createTree()
{ 
    int n ;
    cin>>n;

    if(n == -1)
    {
        return NULL;
    }
    else
    {
        node* root = new node(n);

        root->left = createTree();

        root->right = createTree(); 
        return root;
    }
}

void printTree(node* root)
{
    if(root == NULL)return;

    cout<<root->data<<"  ";

    printTree(root->left);
    printTree(root->right);
    return;
}


void preOrder(node* root)
{
    if(root == NULL)return;

    cout<<root->data<<"  ";

    preOrder(root->left);

    preOrder(root->right);

    return;
}
void inOrder(node* root)
{
    if(root == NULL)return;

    
    preOrder(root->left);
    
    cout<<root->data<<"  ";
    
    preOrder(root->right);
    
    return;
}
void postOrder(node* root)
{
    if(root == NULL)return;

    
    preOrder(root->left);
    
    preOrder(root->right);
    
    cout<<root->data<<"  ";
    
    return;
}

void levelOrderTraversal(node* root)
{ 
    deque<node*> q;

    q.push_back(root);
    q.push_back(NULL);
    while(!q.empty())
    { 
        if(q.size() == 1)break;
        if(q.front() == NULL)
        {   
            q.pop_front();
            cout<<endl;
            q.push_back(NULL);
        }
        else{
            cout<<q.front()->data<<"  ";
            if(q.front()->left != NULL) q.push_back(q.front()->left);
            if(q.front()->right != NULL) q.push_back(q.front()->right); 
            q.pop_front();
        }
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

int main()
{
    int n; 
    node* root = createTree(); 
    levelOrderTraversal(root);
    // 1 2 5 -1 -1 6 -1 -1 3 7 -1 -1 8 -1 -1
    cout<<heightOfTree(root);
}