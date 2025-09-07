#include<bits/stdc++.h>
using namespace std;

void printstack(stack<char> st)
{
    cout<<"Top"<<endl<<" |"<<endl<<" v"<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<endl<<endl<<endl;
}


bool isValid(string st)
{
    int n = st.size();
    stack<char>sta; 
    printstack(sta);
    for(int a = 0 ; a < n ; a++)
    {
        printstack(sta);
        char i = st[a];
        // cout<<i<<endl;
        if((i == '(')|| (i == '[')||(i == '{'))sta.push(i);
        else if((i == ')'&& sta.top()!='(') || ((i == ']')&&(sta.top()!='[')) ||((i == '}')&&(sta.top()!='{')))
        {
            return false;
        }
        else{
            sta.pop();
        }
    }
    if(sta.empty())return true;
    return false;
}

int main(){
    string st = "({}{}([]))";

    if(isValid(st))
    {
        cout<<"this is a valid parenthesis";
    }
    else{
        cout<<"this is not a valid parenthesis";
    }
}