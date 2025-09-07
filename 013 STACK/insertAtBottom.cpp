#include<bits/stdc++.h>

using namespace std;

void bottomInsertion(stack<int>& st ,int num)
{
    if(st.size() == 0)
    {
        st.push(num);
        return;
    }
    int a = st.top();
    
    st.pop(); 

    bottomInsertion(st , num);

    st.push(a);
    return;
}

int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    bottomInsertion(st , 100);
    bottomInsertion(st , 110);

    while(st.size()>0)
    {
        cout<<st.top()<<endl;
        st.pop();
    }
}