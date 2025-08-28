//kuch to hai MEX shit , bahut puch raha hai  
//ye to thoda easy bhi lag raha hai
//khud se try 

#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<vector<int>> a(n,vector<int>(n));


        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                a[i][j]=(i+j)%n;


        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                cout<<a[i][j]<<" ";

            cout<<"\n";
        }
    }
}
