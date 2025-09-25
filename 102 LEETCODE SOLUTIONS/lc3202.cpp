#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<climits>
#include<bits/stdc++.h>
using namespace std;
//ultra naieve , ultra brute force
int ma(int a , int b)
{
    if(a > b)
    {
        return a;
    }
    return b;
}
bool isValid(vector<int>n , int k)
{
    if(n.size() < 2)return false;
    int ans = (n[0] + n[1])%k;
    for(int i =1 ; i < n.size()-1 ; i++)
    {   
        if((n[i] + n[i+1])%k != ans)
        {
            return false;
        }
    }
    return true;
}

void getAllSubsequences(vector<int>& nums , int& k,vector<vector<int>>&ans, int i , vector<int>&temp )
{
    if(i == nums.size())
    {
        if(isValid(temp , k))
        {
            ans.push_back(temp);
        }
        return ;
    }

    //once take the value
    temp.push_back(nums[i]);
    getAllSubsequences(nums , k , ans , i+1 ,temp);
    

    //once leave the value
    temp.pop_back();
    
    getAllSubsequences(nums , k , ans , i+1 ,temp);
    
    
    return;     
}

int maximumLength(vector<int>& nums, int k) {
    vector<vector<int>> a;
    vector<int> t;
    getAllSubsequences(nums ,k,a , 0 , t );
    int maxi = INT_MIN;
    for(auto i : a)
    {
        for(auto j: i)
        {
            cout<<j<<" ";
        }
        
        maxi = ma(maxi , i.size());
    
        cout<<endl;
    }

    
    return maxi;
}

int main(){
    

    return 0;
}
