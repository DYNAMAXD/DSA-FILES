#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(char& m : s)
    {
        cout << m ;
    }   

    for(int i = s.length(); i >= 0 ; i--)
    {
        cout << s[i] ;
    }
}