#include<bits/stdc++.h>
using namespace std;

struct node
{
    int num;
    node* left;
    node* right;

    node(int n)
    {
        this->num = n;
        this->left =NULL;
        this->right= NULL;
    }
};

node* buildTree()
{
    int n;
    cin>>n;
    if(n == -1)return NULL;
    node* root = new node(n);
    root->left = buildTree();
    root->right= buildTree();
    return root;
}

void LevelOrder(node* root)
{ 
    deque<node*>q; 
    q.push_back(root);
    q.push_back(NULL); 
    while(!q.empty())
    {
        node* fr = q.front();
        q.pop_front();
        if(fr == NULL)
        {
            cout<<endl;
            q.push_back(NULL);
            if(q.size() == 1)break;
        }
        else
        {
            cout<<fr->num<<"  ";
            if(fr->left !=NULL)q.push_back(fr->left);
            if(fr->right !=NULL)q.push_back(fr->right);
        }
    }  
}

//this was my intuition , this is worng , 
//i was modifying the level order traversal itself 
//i initially thought that is was right , but after some test casese,
//this is worng , so now the intended way 


vector<int> BoundaryTraversal1(node* root)
{
    vector<int> ans; 
    deque<node*>q;
    stack<int>st;
    q.push_back(root);
    q.push_back(NULL);
    ans.push_back(root->num);
    while(!q.empty())
    {
        node* fr = q.front();
        q.pop_front();


        if(q.size() > 1)
        {
            node* follow = q.front();
            q.pop_front();
            // cout<<(fr == NULL)<<"  "<<(follow == NULL)<<endl;
            if(fr == NULL && follow != NULL)ans.push_back(follow->num);
            if(fr != NULL && follow == NULL)st.push(fr->num);
            if(fr != NULL &&fr->left == NULL && fr->right == NULL)ans.push_back(fr->num);   
            q.push_front(follow);
        }
        

        if(fr == NULL)
        {
            cout<<endl;
            q.push_back(NULL);
            if(q.size() == 1)break;
        }
        else
        {
            cout<<fr->num<<"  ";
            if(fr->left !=NULL)q.push_back(fr->left);
            if(fr->right !=NULL)q.push_back(fr->right);
        }
    }
    while(!st.empty())
    {
        int a = st.top();
        st.pop();
        ans.push_back(a);
    }
    return ans;
}

void getLeftBoundary(node* root , vector<int>& ans)
{
    if(root == NULL)
    {
        return;
    }

    if(!(root->left == NULL && root->right == NULL))ans.push_back(root->num); 
    //here we will not take the boundary and leaf , just the left boundary
    if(root->left != NULL)
    {
        getLeftBoundary(root->left , ans);
    }
    else
    {
        getLeftBoundary(root->right , ans);
    }
}

void getLeaf(node* root , vector<int>& ans){
    if(root == NULL)return;
    //we will take just the leaf nodes nothing more
    if(root->left == NULL && root->right == NULL)ans.push_back(root->num);
    getLeaf(root->left , ans);
    getLeaf(root->right , ans);

}
 
void getRightBoundary(node* root , vector<int>& ans)
{
    if(root == NULL)
    {
        return;
    }

    if(root->right != NULL)
    {
        getLeftBoundary(root->right , ans);
    }
    else
    {
        getLeftBoundary(root->left , ans);
    }
    //here we will not take the boundary and leaf , just the left boundary
    if(!(root->left == NULL && root->right == NULL))ans.push_back(root->num); 
}

vector<int>BoundaryTraversal(node* root)
{
    vector<int>ans;
    ans.push_back(root->num);

    getLeftBoundary(root->left , ans);
    getLeaf(root , ans); 
    getRightBoundary(root->right , ans);

    return ans;

    //this was overall easy concept , 
    // just that i was complicating the things in this with my attempt above

}

int main(){
    node* root;
    root = buildTree();
    // vector<int> ans = BoundaryTraversal1(root);
    vector<int> ans = BoundaryTraversal(root);
    LevelOrder(root);
    cout<<endl<<endl;
    for(auto i : ans)
    {
        cout<<i<<"  ";
    }
    
    //some test casese 
    // this is the exact test case in my copy
    //  10 20 40 -1 -1 50 70 -1 -1 80 55 -1 -1 -1 30 -1 60 90 -1 -1 85 -1 -1
    return 0;
}