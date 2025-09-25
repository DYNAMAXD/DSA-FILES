//remove all the occurances of pattern from string s
#include<bits/stdc++.h>
using namespace std;

void removeOcc(string& s , string& pattern)
{
    if(s.find(pattern) != string::npos)
    {
        s.erase(s.find(pattern) , pattern.size());
        removeOcc(s ,pattern);
    }
    else
    {
        return;
    }
}

int main(){
    string s = "abbbbabcbabcbabc";
    string pattern = "abc";

    removeOcc(s , pattern);
    cout<<s;
    return 0;
}