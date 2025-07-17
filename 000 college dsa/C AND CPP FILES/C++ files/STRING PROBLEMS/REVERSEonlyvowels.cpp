#include <iostream>
using namespace std;

int instring(char a , string l)
{ 
    for (char&i : l)
    {
        if (a == i)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    string s = "hello world";
    // cin >> s;
    string vow = "aeiou";
    string onlyvow;
    int count = 0;
    for (char& i: s)
    {
        for(char& j : vow)
        {
            if (i == j)
            {
            onlyvow += i;
            }
        }
    }
    for (char& l: s)
    {
        if (instring(l , onlyvow))
        {
            // cout<<"vowelfound";
            cout<<onlyvow[onlyvow.length() - count-1];
            count +=1;
        }
        else
        {
            cout<<l;
        }
    }

}