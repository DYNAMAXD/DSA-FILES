#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    return 0;
}

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256] = {0};
        int ismapped[256] = {0};

        //now creating hash of the s-->t
        //and simueltaneously updating the ismapped entreis
        // "ismapped" hash is also very important , check in dry run of "badc" and "baba"
        for(int i = 0; i < s.size() ; i++)
        {
            if(hash[s[i]] == 0 && ismapped[t[i]] == 0)
            // if(hash[s[i]] ==0)
            {
                hash[s[i]] = t[i];
                ismapped[t[i]] = 1;
            }
        }

        // checking each and every character 
        for(int i = 0; i < s.size() ; i++)
        {
            if(hash[s[i]] != t[i])
            {
                return false;
            }
        }
        return true;
    }

};