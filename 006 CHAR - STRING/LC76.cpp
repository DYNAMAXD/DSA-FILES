#include<bits/stdc++.h>

using namespace std;

bool isOkay(vector<int>h1 , string s )
{
    for(int a=  0 ; a < s.size() ; a++)
    { 
        if(h1[s[a]- 'A'] != 0)
        {
            h1[s[a]-'A']--;
        }
    }
    
    for(int i = 0 ; i < 26 ; i++)
    {
        if(h1[i])return false;
    }
    return true;
}

int main()
{
    // string s = "ADOBECODEBANC";
    // string t = "ABC";
    
    // string s = "zxgsxsczeymhaqkerxyumpjazzjfqsgRVJWEHWXNOUOpsorapwtdlyhxoplpvyVCQYSOGYAXNjwnpnrivyftoalcqnkptmudwpic";
    // string t = "OVUCOQNYXSWOHGEYWAJXVNR";
    string s = "a";
    string t = "aa";

    vector<int> h1(26 , 0);
    
    for(auto i : t)
    {
        h1[i- 'A'] ++;
    }
    cout<<s.substr(0 , 1);
    
    for(int i = 1 ; i < s.size() ; i++)
    {
        for(int a = 0 ; a < s.size() ; a++)
        {
            if(a+i <= s.size())
            {
                cout<<s.substr(a , i) << (isOkay(h1 , s.substr(a , i)))<<endl;
                if(isOkay(h1 , s.substr(a , i)))
                {
                    
                    break;
                }
            }
        }
    } 
}