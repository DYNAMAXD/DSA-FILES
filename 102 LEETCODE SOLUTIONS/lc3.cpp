#include<bits/stdc++.h>
using namespace std;

 
int lengthOfLongestSubstring(string s) {
    int i = 0;
    int j = 0;
    int maxlen = 0;
    unordered_set<int> hashh;
    if(s.size() == 1)return 1;//i dont know how to do this edge case
    while(j < s.size())
    {    
        if(hashh.find(s[j]) == hashh.end())
        {
            hashh.insert(s[j]);
            maxlen = max(maxlen , j - i + 1);
            j++; 
        }
        else
        { 

            hashh.erase(s[i]);
            i++;
            //this too is somewhat naive approah , 
            //shrink untill the duplicacy is gone
            //increase i , untill the duplicacy is gone
            // int flag = 1;
            // if((j - i) > (ansj - ansi))
            // {
            //     ansj = j;
            //     ansi = i;
            // } 
            // i = j;
            // hashh.clear();
        }
    } 
    return maxlen;
}



int main(){
    string st = "abababababababababababababababababababababababababababababababab";
    cout<<lengthOfLongestSubstring(st);
    return 0;
}