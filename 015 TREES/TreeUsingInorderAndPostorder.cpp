#include<bits/stdc++.h>

using namespace std;


class classNode
{
    public:
    int num;
    classNode* right;
    classNode* left;
    
    classNode(int n)
    {
        this->num = n;
        this->right = NULL;
        this->left = NULL;
    }
};

classNode* createTree1()
{
    int n;
    cin>>n;
    
    if(n == -1)return NULL;
    
    classNode* temp = new classNode(n);
     
    
    return temp;
    
}

void levelOrder1(classNode* root)
{
    deque<classNode*> q;
    
    q.push_back(root);
    q.push_back(NULL);
    
    while(true)
    {
        classNode* fr = q.front();
        q.pop_front();
        if(q.size() ==0)break;
        if(fr == NULL)
        {
            cout<<endl;
            q.push_back(NULL);
        }
        else{
            cout<<fr->num<<" ";
            if(fr->left != NULL)q.push_back(fr->left);
            if(fr->right != NULL)q.push_back(fr->right);
        }
    }
}



//using classes is good and all , lets try it with struct now
struct TreeNode
{
    int num;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int n)
    {
        this->num  = n;
        this->left = NULL;
        this->right = NULL;
    }
};

TreeNode* createTree()
{
    int n;
    cin>>n;
    if(n == -1)return NULL;
    TreeNode* root = new TreeNode(n);
    root->left = createTree();
    root->right = createTree();
    return root;   
}

void levelOrder(TreeNode* root)
{
    deque<TreeNode*> q;
    q.push_back(root);
    q.push_back(NULL);

    while(!q.empty()){
        TreeNode* fr = q.front();
        q.pop_front();
        if(q.size()==1)break;
        if(fr ==NULL)
        {
            cout<<endl;
            q.push_back(NULL);
        }
        else
        {
            cout<<fr->num<<" ";
            if(fr->left != NULL)q.push_back(fr->left);
            if(fr->right != NULL)q.push_back(fr->right);
        }
    }
}

void getMapp(vector<int> &inorder , unordered_map<int , int>&mapp)
{
    int n = inorder.size();
    for(int i = 0 ; i < n ; i++)
    {
        mapp[inorder[i]] = i;
    }
}

TreeNode* growTree(vector<int>& inorder, vector<int>& postorder , unordered_map<int , int> &mapp , int& postIdx , int inStart , int inEnd)
{
    if(postIdx < 0)return NULL;
    if(inStart > inEnd)return NULL;

    int curr = postorder[postIdx];
    postIdx--;
    int inIndx = mapp[curr];

    TreeNode* root = new TreeNode(curr);

    //build the tree first right and then the left one 
    root->right= growTree(inorder , postorder , mapp , postIdx , inIndx+1, inEnd);   
    root->left = growTree(inorder , postorder , mapp , postIdx , inStart ,inIndx-1 );

    return root;
}


TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
    unordered_map<int , int> mapp;
    getMapp(inorder , mapp);
    int postIdx = postorder.size()-1;
    int inStart = 0;
    int inEnd = inorder.size()-1;
    TreeNode* root = growTree(inorder,  postorder , mapp , postIdx , inStart , inEnd);
    return root;
}


//check the tree construction using the inorder and the preorder and then try this

int main()
{
    return 0;
}