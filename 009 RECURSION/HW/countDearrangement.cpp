//QUESTION

/*You are given n balls numbered from 1 to n and 
there are n baskets numbered from 1 to n in front of you.
 The ith basket is meant for the ith ball. 
 Calculate the number of ways in which
  no ball goes into its respective basket.

Examples:

Input: n = 2
Output: 1
Explanation: For two balls {1, 2}, there is only one possible derangement {2, 1}.
Input: n = 3
Output: 2
// Explanation: For three balls {1, 2, 3},
 there are two possible derangements {3, 1, 2} and {2, 3, 1}*/


#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


// User function Template for C++

class Solution {
    public:
    unordered_map<int  , int> mapp;
    int solve(int n)
    {
        if(n == 1)return 0;
        if(n == 2)return 1;
        if(n == 3)return 2;
        if(mapp.find(n) == mapp.end())
        {
            int a = (n-1)*(solve(n - 1) + solve(n - 2));
            mapp[n] = a;
            return a;
        }
        else
        {
            return mapp[n];
        }
    }
    int countDer(int n) {
        int ans = solve(n);
        return ans;
    }
};


int main(){
    
    return 0;
}