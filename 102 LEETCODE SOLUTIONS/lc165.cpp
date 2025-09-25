#include<bits/stdc++.h>
using namespace std;
 
int compareVersion(string version1, string version2) {
    vector<int> v1;
    vector<int> v2;
    stringstream ss1(version1);
    stringstream ss2(version2);
    string s11 , s22;
    while(getline(ss1 , s11 , '.'))//<<--- yaha pe galti ho jati hai || "." ye use mat karna || '.' ye correct hai
    { 
        v1.push_back(stoi(s11));
    }

    while(getline(ss2 , s22 , '.'))
    {
        v2.push_back(stoi(s22));
    }

    int n = min(v1.size() , v2.size());   
    int i = 0;
    for(i = 0 ; i < n ; i++)
    {   
        if(v1[i] > v2[i])return 1;
        else if(v1[i] < v2[i])return -1;
    }
    if(v1.size() > v2.size())
    {
        while(i < v1.size() && v1[i]==0 )i++;
        if(i == v1.size())return 0;
        return 1;
    }
    if(v1.size() < v2.size())
    {
        while(i < v2.size() && v2[i]==0 )i++;
        if(i == v2.size())return 0;
        return -1;
    }
    return 0;
} 

int main(){
    string v1 = "599.460.301.9524810.6.975.008.339.0.5.0.3.5.150.9";
    string v2 = "0599.9.083.970.70922.3.0.900.250.7.8.8.8.020.6.31586.7.0.1.4.2.5050800.3.590.34224.5.080.6.281.8649105.6.3.097.484.7.4.650.28907.7.090.200.3.455.6.5.7.695.932.6.0.460.3.6.712.117.08712.405.264.5.000.7.9.7.407.9.3.8.3.8.540.731.0381208.0.100.70900.401.101.012.30778.488.07874.002.0009040.9.4.0.8552202.757.0.2.9.830.9.04809.8.0.070840505.308.0.8.079.2.7.968.470.3.81002.2.8.19270.367.389.24378.5.5454000.4.6.739.5.309.0.0.4.10130.9.8.7673400.7.8.0804228.614090066.658.600.0.2.5.2.620.905.00503.519.0";

    cout<<compareVersion(v1 , v2);

    return 0;
}