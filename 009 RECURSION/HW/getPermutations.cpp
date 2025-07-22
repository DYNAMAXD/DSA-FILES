#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;


void permutations(string s , int k  , vector<string>&ans )
{
    if(k == s.size()-1)
    {
        ans.push_back(s);
    }

    for(int i  = k ; i < s.size() ; i++)
    {
        swap(s[k] , s[i]);
        permutations(s , k + 1 , ans);
    }
    return;
}



int main(){
    string st = "abc";
    vector<string>ans;

    permutations(st , ans);

    for(auto i : ans)
    {
        cout<<i<<endl;
    }
    // cout<<ans.size()<<endl;
    return 0;
}