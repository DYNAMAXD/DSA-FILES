//reversing a string using recursion

#include<iostream>
#include<vector>
using namespace std;

string reverseString(string str , int i , int j)
{
    int mid = (i + j)/2;
    char temp = str[i];
}

int main(){
    string s1 = "hello";
    cout<<"reverse of ->" << s1 << " is -->"<<reverseString(s1);
    return 0;
}