//finding out the gcd of two numbers a , b

#include<iostream>

using namespace std;

int gcd(int a , int b)
{
    if(a == 0) return b;
    if(b == 0) return a;

    if(a > b) gcd(a - b , b);
    if(a < b) gcd(a, b-a);

}

int main()
{
    int a = 24;
    int b = 72;

    cout<<"the gcd of the numebers would be " <<gcd(a , b)<<endl;
}