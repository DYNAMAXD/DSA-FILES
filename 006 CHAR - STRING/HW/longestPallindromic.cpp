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
    //expand around the center code
    // vector<string> getSubstrings(string s)
    // {
    //     vector<string> ans;
    //     int n = s.size();
    //     for(int a = 0 ; a < n ; a++)
    //     {
    //         int i = a;
    //         int j = a;
    //         while(i >=0 && j < n)
    //         {
    //             ans.push_back(s.substr(i , j - i+1));
    //             i--;
    //             j++;
    //         }
    //         i = a;
    //         j = a+1;
    //         while(i >= 0 && j < n)
    //         {
    //             ans.push_back(s.substr(i , j - i+1));
    //             i--;
    //             j++;
    //         }
    //     }
    //     return ans;
    // }

    //ultra basic checking pallindrome
    // bool isPallin(string &s){
    //     int i = 0;
    //     int j = s.size()-1;

    //     while(i < j)
    //     {
    //         if(s[i] != s[j])
    //         {
    //             return false;
    //         }
    //         i++;
    //         j--;
    //     }
    //     return true;
    // }



    string longestPalindrome(string s) {
        //this too can be somewhat optimsed , 
        //that checking isPallin code is kinda useless
        //we can integrate it too inside the code
        //the new characters that come in are just the new char that we took from both left and right
        //so instead of checking the whole of the string 
        //we can just check if those new char are equal , if yes then it would obviously be a pallindrome


        // string ans = "";
        // int n = s.size();
        // for(int a = 0 ; a < n ; a++)
        // {
        //     int i = a;
        //     int j = a;
        //     while(i >=0 && j < n)
        //     {
        //         string temp = s.substr(i , j - i+1);
        //         if(s[i] == s[j])
        //         {
        //             if(ans.size() < temp.size())
        //             {
        //                 ans = temp;
        //             }  
        //             i--;
        //             j++;
        //         }
        //         else
        //         { 
        //             break;
        //         }
        //     }


        //     i = a;
        //     j = a+1;
        //     while(i >= 0 && j < n)
        //     {
        //         string temp = s.substr(i , j - i+1);
        //         if(s[i] == s[j])
        //         {
        //             if(ans.size() < temp.size())
        //             {
        //                 ans = temp;
        //             }
        //             i--;
        //             j++;
        //         }
        //         else
        //         { 
        //             break;
        //         }
        //     }
        // }

        // return ans;


        //we can combine the two separate code given above , 
        //in this sense that , "WE WILL EXPAND ONLY IF THE BASE SUBSTRING IS A PALLINDROME"
        //otherwise we will change the center
        // string ans = "";
        // int n = s.size();
        // for(int a = 0 ; a < n ; a++)
        // {
        //     int i = a;
        //     int j = a;
        //     while(i >=0 && j < n)
        //     {
        //         string temp = s.substr(i , j - i+1);
        //         if(isPallin(temp))
        //         {
        //             if(ans.size() < temp.size())
        //             {
        //                 ans = temp;
        //             }
        //             i--;
        //             j++;
        //         }
        //         else
        //         { 
        //             break;
        //         }
        //     }


        //     i = a;
        //     j = a+1;
        //     while(i >= 0 && j < n)
        //     {
        //         string temp = s.substr(i , j - i+1);
        //         if(isPallin(temp))
        //         {
        //             if(ans.size() < temp.size())
        //             {
        //                 ans = temp;
        //             }
        //             i--;
        //             j++;
        //         }
        //         else
        //         { 
        //             break;
        //         }
        //     }
        // }

        // return ans;
        


        //this is a  brute force method , dont recommend, also gives tle
        //first generate all the substrings ,
        //then check if it is a pallindrome 
        //then check if is the biggest we have checked


        // getting all the substrings using the expand from center method
        // vector<string> substrings = getSubstrings(s);
        // string ans = "";
        // for(auto i:substrings)
        // {
        //     basic is pallindrome code

        //     if(isPallin(i))
        //     {
        //         if(ans.length() < i.length())
        //         {
        //             ans = i;
        //         }
        //     }
        // }
        // return ans;
    }
};   