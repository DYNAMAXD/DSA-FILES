#include<bits/stdc++.h>
using namespace std;

//now we just need to find the previous smaller element using stack
//having tc -> O(n)

void solve(vector<int>&arr ,vector<int>&ans)
{
    stack<int>st;
    st.push(-1);
    int n = arr.size();
    for(int i = 0 ; i < n ; i++)
    {
        int curr = arr[i];
        while(!st.empty() && st.top() > curr)st.pop();
        ans.push_back(st.top());
        st.push(curr);
    }
}


int main(){
    vector<int> arr = {8,4,6,2,3};
    vector<int>ans;
    
    solve(arr , ans); 

    for(auto i : ans)
    {
        cout<<i<<"  ";
    }
    return 0;
}