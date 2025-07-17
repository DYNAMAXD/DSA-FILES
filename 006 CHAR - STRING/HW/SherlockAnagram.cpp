// Two strings are anagrams of each other if the letters of one string can be rearranged to form the other string. 
// Given a string, find the number of pairs of substrings of the string that are anagrams of each other.

// Example
// s = mom
// anagramic pairs = [m , m] , [mo , om] at positions [[0] , [2]] and [[0 , 1] , [1 , 2]]


#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>

using namespace std;

int SherlockAnagram(string s)
{
    int ans = 0;
    unordered_map<string , int>mapp;

    for(int i = 0 ; i < s.size() ; i++)
    {
        for(int j = i ; j < s.size() ; j++)
        {
            string sub = s.substr(i , j - i + 1);
            sort(sub.begin() , sub.end());

            mapp[sub]++;
        }
    }

    for(auto g:mapp)
    {
        int c = g.second;
        ans+=((g.second)*(g.second-1)/2);
    }
    
    return ans;
}

int main()
{
    string str = "abba";

    cout<<"for this string-->"<<str<<endl;
    cout<<"answer = "<<SherlockAnagram(str)<<endl;
    
    return 0;
}