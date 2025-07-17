#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;

vector<vector<char>> zigZag(string &str ,int &numRows)
{
    int n = numRows;
    int count = 0;
    vector<vector<char>>ans(numRows);
    // cout<<ans.size()<<n;
    //yaha pe galti ho jati hai, vector<vector<string>> mat lena , char lena
    for(int i = 0 ;i < n ;i++)
    {
        ans[i].push_back(str[count++]);
    }
    while(count < str.size())
    {
        // cout<<str[count++];
        for(int i = n-2 ;i >=0 && count < str.size();i--)
        {
            ans[i].push_back(str[count++]);
        }
        for(int i = 1 ;i < n && count < str.size();i++)
        {
            ans[i].push_back(str[count++]);
        }
    }
    return ans;
}


int main()
{
    string str = "divyansh";
    int numRows = 3;
    int count = 0;
    vector<vector<char>> ans = zigZag(str , numRows);
     
    for(auto i : ans)
    {
        for(auto j : i)
        {
            cout<<j;
        }
        cout<<endl;
    }
}