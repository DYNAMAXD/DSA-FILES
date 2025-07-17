#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<long long int> arr , long long int n , long long int target , long long int check)
{
    long long int ans = 0;
    for(int i = 0 ; i < n ;i++)
    {
        long long int treeheight = arr[i];
        if(treeheight > check)
        {
            ans+=(treeheight - check);
        }
    }
    if(target > ans)return false;
    return true;
}


int main(){

    long long int n , target;
    cin>>n>>target;
    long long int maxi = 0;
    // long long int* arr = new long long int[n];
    vector<long long int> arr(n);

    for(int i = 0 ; i < n; i++)
    {
        cin>>arr[i];
        arr.push_back(arr[i]);
        maxi = max(maxi , arr[i]);
    }


    long long int s = 0;
    long long int e = maxi;
    long long int ans = 0;
    while(s <= e)
    {   long long int mid = s + (e - s)/2;
        if(isPossible(arr , n , target , mid))
        {
            ans = mid;
            s =  mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    cout<<ans;
    return ans;
} 