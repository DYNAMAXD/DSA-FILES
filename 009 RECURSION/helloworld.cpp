#include<iostream>
#include<unordered_map>
using namespace std;
unordered_map<int , int> mapp;

int fact(int n)
{
    int ans = 0;
    if (n == 1) return 1;
    
    if(mapp.find(n) == mapp.end())
    {
        ans = n*fact(n-1);
        mapp[n] = ans;
    }
    
    return mapp[n];
    
}

int main(){
    cout<<fact(12)<<endl;
    cout<<mapp[4]<<endl;
    return 0;
}