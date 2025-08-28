#include<bits/stdc++.h>

using namespace std;
const int MAXI = 1'000'000'007;
//this was the most brute force that i 
// void countSum(int t , vector<int>&pows , int i , vector<int>& ans,int count)
// {
//     if(i == pows.size() || t < pows[i] )
//     {
//         return;
//     }
//     cout<<t<<"  "<<pows[i]<<endl;
//     if(t == pows[i])
//     {
//         cout<<"got zero"<<count<<endl;
//         ans.push_back(count+1);
//         return;
//     }
//     if(t > pows[i])
//     {
//         countSum(t - pows[i] , pows , i+1 , ans , count+1);
//         countSum(t, pows , i+1 , ans , count);
//         return;
//     }
//     return;
// }

//this is somewhat i've tried to integrate dp into this
    // int countSum(int t , vector<int>&pows , int i , vector<int>& ans,int count , vector<vector<int>>&dp)
    //     {
    //         // cout<<t<<"  "<<pows[i]<<endl;
    //         if( i == pows.size()|| t < pows[i])
    //         {
    //             return 0;
    //         }
    //         if(t == pows[i])
    //         { 
    //             ans.push_back(count+1);
    //             return 1;
    //         }
    //         if(t > pows[i])
    //         {
    //             if(dp[t][i] < 0)
    //             {
    //                 int take = countSum(t - pows[i] , pows , i+1 , ans , count+1 , dp);
    //                 int nottake = countSum(t, pows , i+1 , ans , count , dp);
    //                 dp[t][i]=take+nottake;
    //             }
    //             else
    //             {
    //                 ans.push_back(dp[t][i]);
    //                 return dp[t][i];
    //             } 
    //         }
    //         return dp[t][i];
    //     }


    //finally did it on my own
int countSum(vector<vector<int>>&dp , vector<int>&arr , int i , int t)
{
    if(i == arr.size() || t < arr[i])
    {
        return 0;
    } 
    if(t == arr[i])
    {
        return 1;
    }
    if(dp[t][i] < 0)
    {
        int take = countSum(dp , arr , i+1 , t - arr[i]);
        int nottake = countSum(dp , arr , i+1 , t);
        dp[t][i] = (take + nottake)%MAXI;
    } 
    return dp[t][i];
}


int main()
{
    // int n = 64;
    // int x = 3;
    

    //some test cases used to kill with TLE
    int n = 233;
    int x = 1;
    int size = pow(n ,1.0/x );  
    
    vector<int>arr;     
    
    for(int i = 1 ;i <= size +1;i++)
    {
        arr.push_back(pow(i , x));
    }
    
    vector<vector<int>>dp(n+1 , vector<int>(size , -1));

    int ans = countSum(dp , arr , 0 , n);
    cout<<ans<<endl;
    
    
}