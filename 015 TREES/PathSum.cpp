#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool solve(TreeNode* root , int t , int sum)
{
    if(root == NULL)return false;
    //this is a edge case , if the tree is not there , just a null node so return false

    //agar null nai hai , toh sum ko plus karke aage jaao
    sum = sum + root->val;
    //check karo ki agar wo node leaf node to nai hai , agar hai to check karlo ki yehi sum chaiye tha apne ko?
    if(root->left == NULL && root->right == NULL)
    {
        //agar ha to true return karwate chalo
        if(sum == t)
        {
            return true;
        }
        return false;
    }
    //warna left call and then right call
    bool left = solve(root->left , t , sum);
    bool right= solve(root->right , t , sum);
    return left||right;
}

bool hasPathSum(TreeNode* root, int t) {
    // we will maintain a sum that will denote the sum from that point to the root
    int sum = 0;
    return solve(root , t , sum);
}

int main(){
    //lc 112
    return 0;
}