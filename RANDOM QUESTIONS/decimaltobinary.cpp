#include<iostream>
#include<cmath>
using namespace std;


int decitobinbitwise(int a)
{
    int bit = 0;
    int i = 0;
    while (a>0)
    {
        bit = bit + (a&1)*pow(10 , i++);
        a = a>>1;    
    }   
    return bit;
}

int binarytodecimal(int a)
{
    int ans = 0;
    int i = 0;
    while (a > 0)
    {
        ans =ans+ (a%10)*pow(2 , i++);
        a=a/10;
    }
    return ans;
}

int binarytodecimalbitwise(int a)
{

}

int decitobinGPT(int a)
{
    int bin = 0;
    int i = 1;
    while(a > 0)
    {
        bin += (a % 2) * i;
        a /= 2;
        i *= 10;
    }
    return bin;
}
int decitobin(int a)
{
    int bin = 0;
    int i = 0;
    while(a > 0)
    {
        bin = bin + a%2*pow(10 , i++);
        // bin += (a%2) * i;
        // i*=10;
        a = a/2;
    }
    return bin;
}

int main(){
     cout << decitobin(4)<<endl;
     cout << decitobinGPT(4)<<endl;
    // cout<< decitobinbitwise(10)<<endl;
    // cout<<binarytodecimal(1010);

}