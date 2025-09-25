#include<bits/stdc++.h>
using namespace std;

void profit(vector<int>&prices , vector<int>&ans)
{
    stack<int>st;
    int n = prices.size();
    st.push(-1);
    for(int i = n -1 ; i >= 0 ; i-- )
    {
        int curr = prices[i];
        while(!st.empty() && st.top()!=-1 && st.top() < curr )st.pop();
        ans.push_back(st.top());
        if(st.top() < curr)
        {
            st.push(curr);
        }
    }
}

int maxProfit(vector<int>& prices) {
    vector<int> ans;

    profit(prices , ans);
    reverse(ans.begin() , ans.end());
    int maxi = INT_MIN;
    
    for(int i = 0 ; i < prices.size() ; i++)
    {
        maxi = max(ans[i] -  prices[i] , maxi);
        // cout<<maxi<<"  ";
    }
    if(maxi < 0 )return 0;
    return maxi;
}
int main(){
    vector<int> prices = {7,1,5,3,6,4};

    int ans = maxProfit(prices);

    cout<<ans;
    return 0;
}
 