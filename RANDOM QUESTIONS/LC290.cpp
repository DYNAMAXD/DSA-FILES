#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool wordPattern(string p, string s) {
        //extreme brute force
        //firstly rewriting the whole of cat dog... into a b
        //and then using the same logic rewriting the pattern too
        vector<string> w;
        unordered_map<string , char> mapp;
        unordered_map<char , char> cmapp;
        int i = 0 ; 
        int j = 0 ;
        string ans = "";
        string ans2 = "";
        while(j < s.size())
        {
            //cout<<"checking this"<<j<<"-->"<<s[j]<<endl;
            if(s[j] == ' ')
            {
                // cout<<"i , j = "<<i<<"   "<<j<<"  this is added in vector-->"<<s.substr(i , j-i)<<endl;
                w.push_back(s.substr(i , j-i));
                j++;
                i = j;
            }
            else
            {
                j++;
            }
        }
        w.push_back(s.substr(i , j-i));
 
        int a = 'a';
        for(auto i : w)
        {
            // cout<<i<<endl;
            if(mapp.find(i) == mapp.end())
            {
                mapp[i] = a;
                ans+=a;
                a++;
            }
            else
            {
                ans += mapp[i] ;
            }

        }
        
        a = 'a';
        for(int i = 0 ; i < p.size() ; i++)
        {
            if(cmapp.find(p[i]) == cmapp.end())
            {
                cmapp[p[i]] = a;
                ans2+=a;
                a++;
            }
            else
            {
                ans2+=cmapp[p[i]];
            }
        }

    // cout<<ans<<"-->"<<ans2;
    if(ans == ans2)
    {
        return true;
    }
    return false;
    }
};

int main(){
    
    return 0;
}