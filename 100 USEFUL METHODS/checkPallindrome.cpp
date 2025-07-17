#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

bool isPallin(string s){
    int i = 0;
    int j = s.size()-1;

    while(i < j)
    {
        if(s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){
    if(isPallin("abczba"))
    {
        cout<<"is a pallindrome";
    }
    return 0;
}