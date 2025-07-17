#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

//this is the getting the all the substrings
vector<string> getSubstrings(string s)
    {
        vector<string> ans;
        int n = s.size();
        for(int a = 0 ; a < n ; a++)
        {
            int i = a;
            int j = a;
            while(i >=0 && j < n)
            {
                ans.push_back(s.substr(i , j - i+1));
                i--;
                j++;
            }
            //this while loop is made to get all the odd length substrings
            i = a;
            j = a+1;
            while(i >= 0 && j < n)
            {
                ans.push_back(s.substr(i , j - i+1));
                i--;
                j++;
            }
            //while this loop is made to get all the even length substrings
        }
        return ans;
    }

int main(){
    string str ="abcd";
    vector<string> s = getSubstrings(str);

    for(auto i:s)
    {
        cout<<i<<endl;
    }
    
    return 0;
}