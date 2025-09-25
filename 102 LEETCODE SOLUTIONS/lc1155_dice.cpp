#include<bits/stdc++.h>
using namespace std;


long long solve(int n , int k , int target , vector<vector<long long>>&dp)
{
    if(target < 0)return 0;
    if(n == 0)
    {
        if(target == 0)return 1;
        return 0;
    }
    if(dp[n][target] == -1)
    {
        const int modd = 1000000007;
        
        long long ans = 0;
        
        for(int i = 1 ; i <= k ;i++)
        {
            long long temp = solve(n-1 , k , target-i , dp);
            ans = (ans+temp)%modd;
        }
        dp[n][target]=(ans)%modd;
        return ans;
    }
    return dp[n][target];
}

int numRollsToTarget(int n, int k, int target) {
    vector<vector<long long>>dp(n+1 , vector<long long>(target+1 , -1));
    const int modu= 1'000'000'007;
    // vector<vector<int>> dp(n+1 , vector<int>(target+1));
    if(target < n)return 0;
    dp[0][0] = 1;
    cout<<solve(n , k , target , dp);
    //this was the gpt code , i have done it using recursive way using dp and all 
    // for(int dices = 1 ; dices <= n ; ++dices)
    // {
        //     for(int sum = 1 ; sum <= target ; ++sum)
        //     {
            //         for(int faceval = 1 ; faceval <= k ; ++faceval)
            //         {
                //             if(sum-faceval>=0)dp[dices][sum] = (dp[dices][sum] + dp[dices-1][sum-faceval])%modu;
                //         }
                //     }
    // }
    return dp[n][target]%modu;
}


int main(){
    int n = 30;
    int k = 30;
    int target = 100;
    cout<< numRollsToTarget(n , k , target);
    

    return 0;
}





