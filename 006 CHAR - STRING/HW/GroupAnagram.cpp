#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main(){
    
    return 0;
}


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>>mapp;

        for(auto s : strs)
        {
            string value =s ;
            sort(s.begin() , s.end());
            mapp[s].push_back(value);
        }

        vector<vector<string>> ans;
        // for(auto i: mapp)
        for(auto i  = mapp.begin() ; i != mapp.end() ; i++)
        {
            ans.push_back(i->second);
        }
        return ans;
    }
};