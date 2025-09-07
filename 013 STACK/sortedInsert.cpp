#include<bits/stdc++.h>

using namespace std;

void sortedinsert(stack<int>&st , int num)
{
    if(st.empty())
    {
        st.push(num);
        return;
    }

    int a = st.top();
    st.pop();
    if(num >= a)
    {
        st.push(a);
        st.push(num);
    }
    else
    {
        sortedinsert(st , num);
        st.push(a);
    }
    return;    
}

void printst(stack<int>st)
{
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
}

int main()
{
    stack<int> st;

    for(int i = 10 ; i < 70 ; i+=10)
    {
        st.push(i);

    }
    sortedinsert(st , 42);
    sortedinsert(st , 36);
    sortedinsert(st , 310);
    sortedinsert(st , -10);

    printst(st);
    
}