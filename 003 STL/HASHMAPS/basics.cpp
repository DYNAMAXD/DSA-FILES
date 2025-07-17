#include<iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> table; 

    table[0] = 23 ;
    table[1] = 34;
    table[2] = 45;

    unordered_map<int , int> ::iterator it;

    for(it = table.begin() ; it != table.end() ; it++)
    {
        int key = it ->first;
        int value = it -> second;

        cout<<"key = "<<key <<"  value = " <<value <<endl;
    }
    return 0;
}