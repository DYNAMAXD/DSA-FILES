#include<bits/stdc++.h>

using namespace std;

//have to construct a tree using the pre order and inorder given


class TreeNode
{
    public:
    int num;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int n)
    {
        this->num = n;
        this->left =NULL;
        this->right=  NULL;
    }
};

TreeNode* createTree()
{
    int n;
    cin>>n;
    if(n == -1)return NULL;
    TreeNode* temp = new TreeNode(n);
    temp->left = createTree();
    temp->right= createTree();
    return temp;
}

void levelOrder(TreeNode* root)
{
    if(root == NULL)return;
    deque<TreeNode*> q;

    q.push_back(root);
    q.push_back(NULL);

    while(true)
    {
        TreeNode* fr = q.front();
        q.pop_front();
        if(q.size() == 0)break;
        if(fr == NULL)
        {
            cout<<endl;
            q.push_back(NULL);
        }
        else{
            cout<<fr->num<<"  ";
            if(fr->left != NULL)q.push_back(fr->left);
            if(fr->right!= NULL)q.push_back(fr->right);   
        }
    }
}


//lets create the mapping of the numbers to its indices in the inorder vector
void getIndices(vector<int>& inorder , unordered_map<int ,int>& mapp)
{
    // in mapp it would be number -> index
    //pass the vector and unorderd_map by reference so that you dont lose the values
    int n = inorder.size();
    for(int i = 0 ; i < n ; i++)
    {
        mapp[inorder[i]] = i;
    } 
}


TreeNode* growTree(vector<int>& preorder, vector<int>& inorder , unordered_map<int, int>&mapp , int& preIndx , int inStart ,int inEnd)
{
    //have the requried variables ,like the preInx for the traversing in the preorder
    //have the inoStart , inoEnd for specifying the indices in the inorder array
    //then we can use this slice of inorder and then we can have the base cases
    
    //base cases would be like this

    //1.if the inStart is before the inEnd
    if(inStart > inEnd)return NULL;
    //2.if the preIndx is inside the preorder size
    if(preIndx >= preorder.size())return NULL;

    //now with the base cases out of the way , we can start to do the acutal tree creation
    

    //Step1. create the node (say root)for the elemnt preorder[preIndx]
    //Step2. create the left of that 'root'-->done reciursively as the 
        //Step2.1 just changeing the variables of preIndx , inStart , inEnd 
    //Step3. create the right of the 'root'
        //Step3.1 just changeing the variables of preIndx , inStart , inEnd 

    //Step1:
    int curr = preorder[preIndx];
    preIndx++;  //as we do not want to compute for the same index again and again we increment by 1
    int inIndx = mapp[curr]; //we will need the index to create the slicing in the in order vector
    TreeNode* root = new TreeNode(curr);

    //Step2
    //the slice of the inorder for the left would be
    //inStart ---- inIndx - 1
    root->left = growTree(preorder , inorder , mapp , preIndx , inStart , inIndx -1 );

    //increment the preIndx by one as we do not want to calcuate for the same index again and again
    // preIndx++;
    //Step3
    //the slice of the inorder for the right would be 
    // inIndx + 1 ----- inEnd
    root->right = growTree(preorder , inorder , mapp , preIndx , inIndx + 1 , inEnd);

    return root;
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    unordered_map<int , int> mapp;
    getIndices(inorder , mapp);
    int preIndx = 0;
    int inStart = 0;
    int inEnd = inorder.size();
    TreeNode* root = growTree(preorder ,inorder ,mapp  , preIndx , inStart , inEnd);

    return root;
}



int main()
{
    vector<int> preorder = {4,5,3,17,2,6,7,1,9,8,10,11,13,14,15,20,19};
    vector<int> inorder =  {3,2,6,17,1,7,5,9,8,4,10,14,13,11,20,15,19};

    TreeNode* root = buildTree(preorder , inorder);

    levelOrder(root);
}