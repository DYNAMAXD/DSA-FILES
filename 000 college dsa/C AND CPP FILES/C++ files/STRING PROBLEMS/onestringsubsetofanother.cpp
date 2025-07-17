#include <iostream>
using namespace std;

// int instring(char i , char s)
// {
//     for (char& m : s)
//     {
//         if (m == s)
//         {
//             return 1;
//         }
//     }
//     return 0;
// }

int main()
{
    string s1 , s2;
    s1 = "ll";
    s2 = "caterpillar";
    string teststr = "" ;
    for(int i = 0 ; i < s2.length()- s1.length()-1 ; i++)
    {
        for (int j = 0 ; j < s1.length() ; j++)
        {
            teststr +=s2[i+j] ;
        }
        cout<<teststr << endl;

        if (s1 == teststr)
        {
            cout <<s1<<" is in between "<<s2 <<endl;
            break;
        }
        teststr = "";
    }
}