#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& gas, vector<int>& cost) {
    int total = 0;   // net gas across all stations
    int bal = 0;     // current balance
    int start = 0;   // candidate start station
    
    for (int i = 0; i < gas.size(); i++) {
        total += gas[i] - cost[i];
        bal += gas[i] - cost[i];
        
        if (bal < 0) {   // can't reach next station
            start = i + 1;
            bal = 0;
        }
    }
    
    return total >= 0 ? start : -1;
}

int main(){
    vector<int> gas = {1,2,3,4,5};
    vector<int> cost ={3,4,5,1,2};

    int ans = solve(gas , cost);
    cout<<ans;
    return 0;
}