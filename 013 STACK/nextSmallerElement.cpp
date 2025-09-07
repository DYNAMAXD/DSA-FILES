//this can be done using TC of O(n^2)
//but using the stack we can do it in O(n)

#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&arr ,vector<int>&ans)
{
    int n=arr.size();
    stack<int>st;
    st.push(-1);
    
    for(int i = n-1 ; i >= 0 ; i--)
    {
        int curr = arr[i]; 
        while(st.top() > curr)st.pop();
        ans.push_back(st.top());
        st.push(curr);
    }
}

int main(){
    vector<int> arr = {8,4,6,2,3};
    vector<int>ans;
    
    solve(arr , ans);
    //for this , we have to reverse the stack , as we are going from back to front 
    //and the vector is pushed back so the order comes as reversed 
    //so we just reverse the ans
    reverse(ans.begin() , ans.end());
    for(auto i : ans)
    {
        cout<<i<<"  ";
    }
    return 0;
}