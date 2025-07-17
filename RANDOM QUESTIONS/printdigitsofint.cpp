#include<iostream>
using namespace std;

void printdigits(int n)
{
    int a ;
    while(n > 0)
    {
        a = n%10;
        cout<<a<<endl;
        n = n/10;
    }
}

int main(){
    int n = 1234;
    printdigits(n);
    return 0;
}