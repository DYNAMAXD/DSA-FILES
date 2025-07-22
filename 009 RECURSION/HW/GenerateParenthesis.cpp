#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

void solve(int n  , string temp , vector<string> & ans , int open , int close)
{
    if(temp.size() == 2*n)
    {
        ans.push_back(temp);
        return;
    }

    if(close < open)
    {
        solve(n , temp + ')' , ans , open, close+1);
    }
    if(open < n)
    {
        solve(n , temp + '(' , ans , open+1 , close);
    }
    return;
}

int main(){
    int n = 4;
    vector<string> ans;
    string temp = "";
    solve(n , temp , ans,  0 , 0);
    for(auto i : ans)
    {
        
        cout<<i<<endl;
    }


    return 0;
}