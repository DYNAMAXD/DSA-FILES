 #include<bits/stdc++.h>
 using namespace std;
 
//this question , directly clicked one pattern for stack ,
//NEXT SMALLER ELEMENT -
//but this was NEXT LARGER ELEMENT
//not even that , it was LARGEST ELEMENT AHEAD OF IT;

//so i did it with stacks and then did it in copy first , 
//and then saw that , the only thing added to it was one constriaint at line 24

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
        if(st.top() < curr)     //this is what makes the thing different from the NSE
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
    // vector<int> prices = {1, 1, 1, 7, 4, 4, 4223, 4, 4, 455, 4, 4, 4, 44, 3, 1343, 2, 343, 654, 763, 57, 65, 876, 34, 436, 6, 435, 45, 54, 87, 656, 4, 4, 45, 32, 65, 2, 6466, 43, 75, 765, 235, 547, 34, 45, 7, 34, 760, 0, 0, 0, 45, 45, 5, 12, 365, 697, 433, 45, 4, 5, 43, 5, 323, 86, 65, 8, 5624, 4, 4, 324, 4, 41, 132, 1, 1, 155, 1, 155, 1, 547, 34, 45, 7, 34, 760, 0, 0, 0, 45, 45, 5, 12, 365, 697, 433, 45, 4, 5, 43, 5, 323, 86, 65, 8, 5624, 4, 4, 324, 4, 41, 132, 1, 1, 155, 1, 155, 1, 547, 34, 45, 7, 34, 760, 0, 0, 0, 45, 45, 5, 12, 365, 697, 433, 45, 4, 5, 43, 5, 323, 86, 65, 8, 5624, 4, 4, 324, 4, 41, 132, 1, 1, 155, 1, 155, 1, 547, 34, 45, 7, 34, 760, 0, 0, 0, 45, 45, 5, 12, 365, 697, 433, 45, 4, 5, 43, 5, 323, 86, 65, 8, 5624, 4, 4, 324, 4, 41, 132, 1, 1, 155, 1, 155, 1, 547, 34, 45, 7, 34, 760, 0, 0, 0, 45, 45, 5, 12, 365, 697, 433, 45, 4, 5, 43, 5, 323, 86, 65, 8, 5624, 4, 4, 324, 4, 41, 132, 1, 1, 155, 1, 155, 1};

    cout<<maxProfit(prices);
    return 0;
}