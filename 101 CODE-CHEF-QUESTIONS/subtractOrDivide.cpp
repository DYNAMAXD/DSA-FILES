#include <bits/stdc++.h>
using namespace std;

void solve(int n ,unordered_set<int>&ans)
{
    if(ans.find(n) != ans.end())return;
    if(n > 2)
    {
        solve(n-2 ,ans);
        ans.insert(n);
    }
    if(n > 1)
    {
        solve(n/2 , ans);
        ans.insert(n);
    }
    
}

int main() { 
	int n = 3;
	// cin>>n;
	
	while(n--)
	{
	    int num;  
	    unordered_set<int>ans;
	    solve(n , ans);
	    cout<<ans.size()<<endl;
	}
}
