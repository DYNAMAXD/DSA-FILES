#include<iostream>
#include<algorithm>
using namespace std;

string s1 , s2;
bool dynamaxcomparator(char a , char b)
{
    return (s2.find(a) < s2.find(b));
}

int main(){
    s1 = "absidlnfasdf";
    s2 = "qwertyuiopasdfghjklzxcvbnm";

    sort(s1.begin() , s1.end() , dynamaxcomparator);
    cout << s1 << endl;

    return 0;
}