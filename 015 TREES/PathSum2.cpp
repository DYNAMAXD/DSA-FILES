#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void solve(TreeNode* root, int t ,int sum, vector<int>temp , vector<vector<int>>&ans)
{
    if(root == NULL)return ;

    //abh ek baar calculate kar lete hai , root node ko bhi lete hue ,
    // aur sum and ans ko update karte hai
    sum = sum + root->val;
    temp.push_back(root->val);
    // for(auto i : temp)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    //matlab ye ek leaf node hai , 
    if(root -> left == NULL && root->right == NULL)
    {
        // cout<<"leaf  " <<root->val<<"  sum = "<<sum<<endl;
        //check karo ki yehi answer to nai hai
        if(sum == t)
        {
            ans.push_back(temp);
        }
        else 
        {
            return;
        }
    }

    //left call
    solve(root->left , t ,sum, temp , ans);
    solve(root->right , t,sum , temp , ans);
    
    //iss point tak , har baar ans me pure paths update ho chuke honge
    return;

}

//ek baar backtracking wala solution bhi try karte hai

// void solve(TreeNode* root, int t ,int sum, vector<int>temp , vector<vector<int>>&ans)
// abh isme to target kabhi bhi change ni hoga 

void solveBT(TreeNode* root, int t ,int &sum, vector<int>&temp , vector<vector<int>>&ans)
{
    //wohi base case agar root null hua to
    if(root == NULL)return;

    //variables update kardo root ke hisab se
    sum = sum + root->val;
    temp.push_back(root->val);
    // for(auto i : temp)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<" sum = "<<sum<<endl;
    //check karo ki ye leaf node to nai
    if(root->left == NULL && root->right == NULL)
    {
        if(t == sum)
        {
            ans.push_back(temp);
        }
        //same chiz yaha bhi revert back karna
        sum =  sum  - root->val;
        temp.pop_back();
        return;
    }
    //further calls
    solveBT(root->left , t , sum , temp , ans);
    solveBT(root->right, t , sum , temp , ans);


    //abh ek baar backtracking ke updates sirf return statement ke just pehle karna
    //jo bhi chiz kia tha , usko revert back karna
    //jaise apan ne wo sum ko update kiya tha , usko hatao
    sum =  sum  - root->val;
    temp.pop_back();
    return;

}
vector<vector<int>> pathSum(TreeNode* root, int t) {
    //apan ek vector of vector of int bana lete hai isko return karna hai
    vector<vector<int>> ans;
    //ek vector <int> bhi banate chalte hai ,isko update kar denge har bar
    vector<int>temp;
    //ek sum bhi rakhte hai , baar baar calculate nai karte hai
    int sum = 0;

    //aur isme apne ko har possible path chaiye hoga , to har possibility explore karna hoga
    // solve(root , t ,sum, temp , ans);
    solveBT(root , t ,sum, temp , ans);

    return ans;
    }


int main(){
    
    return 0;
}