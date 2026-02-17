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

void preOrder(node* root)
{
    cout<<endl;
    if(root == NULL)
    {
        cout<<"X"<<endl;
        return;
    }

    cout<<root->data<<endl;
    preOrder(root->left); 
    preOrder(root->right);  
    return; 
}

void inOrder(node* root)
{
    preOrder(root->left);  
    if(root == NULL)
    {
        cout<<"X"<<endl;
        return;
    }
    
    cout<<root->data<<endl;
    preOrder(root->right);  
    return; 

}

void postOrder(node* root)
{
    preOrder(root->left);  
    preOrder(root->right);  
    if(root == NULL)
    {
        cout<<"X"<<endl;
        return;
    }
    
    cout<<root->data<<endl;
    return; 

}

void levelOrder(node* root)
{
    //this is the normal level order traversal
    // deque<int>q;
    //we will push the full class objects into this , not just the values
    deque<node*>q;
    q.push_back(root );
    q.push_back(NULL);
    while(!q.empty())
    {
        node* temp = q.front();
        
        cout<<temp->data<<"  ";
        
        if(temp->left != NULL) q.push_back(temp->left);
        
        if(temp->right != NULL) q.push_back(temp->right);   

        q.pop_front();
    }
}

void levelOrderAdv(node* root)
{
    // deque<int>q;
    //we will push the full class objects into this , not just the values

    //here we will also print when the new level is being printed
    deque<node*>q;
    q.push_back(root );
    q.push_back(NULL);
    while(!q.empty())
    {
        if(q.front() == NULL)
        { 
            cout<<endl;
            if(q.size() != 1)q.push_back(NULL);
        }
        else
        {
            node* temp = q.front();
            
            cout<<temp->data<<"  ";
            
            if(temp->left != NULL) q.push_back(temp->left);
            
            if(temp->right != NULL) q.push_back(temp->right);
        }        
        q.pop_front();
    }
}

int main(){
    node* root;
     
    root = createTree();

    // using this data 10 20 40 -1 -1 50 -1 -1 30 60 -1 -1 70 -1 -1

    levelOrder(root);
      
}