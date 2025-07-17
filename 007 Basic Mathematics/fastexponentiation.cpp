//find the exponentiation of a^b 

#include<iostream>

using namespace std;

long long int exp(int a , int b)
{
    if(b == 1) return a;
    if(b%2 == 0){
        long long int n = exp(a , b/2);
        return n*n;
    }
    else{
        long long int n = exp(a , (b-1)/2);
        return n*n*a;
    }
}

int main()
{
    int a = 2;
    int b = 34;
    int* ptr = &a;
    // long long int ans = exp(a , b);
    // cout<<"the value of "<<a<<"^"<<b<<" would be :"<<ans;
    cout<<sizeof(int)<<"--->"<<sizeof(ptr)<<endl;
}