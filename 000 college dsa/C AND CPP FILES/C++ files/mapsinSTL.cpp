#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<string , int> marks;
    marks["ygbashdf"] = 85;
    marks["ufdn"] = 48;
    marks["fdni"] = 18;
    map<string , int> :: iterator itr;
    for(itr = marks.begin() ; itr!=marks.end() ; itr++)
    {
        cout<< (*itr).first << " " << (*itr).second << endl;
    }
}