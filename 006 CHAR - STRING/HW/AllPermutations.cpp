#include<iostream>
#include<unordered_map>
#include<map>
#include<vector>

using namespace std;

void printPermutations(string &str , map<char , int>&mapp ,  vector<string>&ans)
{
    for(auto it = mapp.begin() ; it != mapp.end() ;it++)
    {
        if(it->second > 0)
        {
            str.push_back(it->first);
            it->second = it->second-1;
            
            ans.push_back(str);
            printPermutations(str , mapp , ans);
            
            it->second = it->second + 1;
            str.pop_back();
        }
    }
    return;
}
   
int main()
{
    string str = "AAB";
    map<char , int> mapp;
    for(auto i : str)
    {
        mapp[i]++;
    }
    vector<string> ans;
    string st = "";
    printPermutations( st , mapp , ans);
    
    for(auto i : ans)
    {
        cout<<i<<" ";
    }

    return 0;
}
