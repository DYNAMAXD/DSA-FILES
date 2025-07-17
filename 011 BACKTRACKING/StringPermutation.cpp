#include<iostream>
#include<vector>
using namespace std;

void swap(char* a  , char* b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void dsolve1(string st , vector<string>&ans , int i , int* a)
{
    if(i == st.length()-1)ans.push_back(st);

    for(int j = i ; j < st.length() ; j++)
    {
        swap(&st[i] , &st[j]);
        dsolve1(st , ans , i+1 , a);
    }
    return;
}
void dsolve2(string &st , vector<string>&ans , int i , int* a)
{
    if(i == st.length()-1)ans.push_back(st);

    for(int j = i ; j < st.length() ; j++)
    {
        swap(&st[i] , &st[j]);
        dsolve2(st , ans , i+1 , a);
        swap(&st[i] , &st[j]);
    }
    return;
}

int main(){
    string st = "abc";
    
    vector<string> ans1;
    vector<string> ans2;
    int a = 0;

    dsolve1(st ,ans1 , 0 ,&a );
    dsolve2(st ,ans2 , 0 ,&a );


    for(auto i:ans1)
    {
        cout<<i<<endl;
    }
    cout<<endl<<endl;
    for(auto i:ans2)
    {
        cout<<i<<endl;
    }
    return 0;
}