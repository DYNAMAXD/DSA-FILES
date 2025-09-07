#include<bits/stdc++.h>

using namespace std;

void printstack(stack<int> st)
{
    cout<<"Top"<<endl<<" |"<<endl<<" v"<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<endl<<endl<<endl;
}

void insertAtBottom(stack<int>&st , int target)
{ 
    if(st.empty())
    {
        st.push(target);
        return;
    }
    int a = st.top();
    st.pop();

    insertAtBottom(st , target);

    st.push(a);
    return;
}


void reverseStack(stack<int>&st)
{
    //for reversing the stack ,we will need to first have a function of 
    //append to bottom of a stack
    // now for this , we will first have to take the top element
    //and then take it out till the elements have fininshed
    //then push that element on the bottom of the stack

    if(st.empty())
    {
        return;
    }
    
    int a = st.top();
    st.pop();
    reverseStack(st);
    // st.push(a);
    insertAtBottom(st , a);
    return;
}

int main()
{
    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    insertAtBottom(st , 99);
    insertAtBottom(st , 88);
    cout<<"Before reversing"<<endl;
    printstack(st);
    reverseStack(st);
    cout<<"After reversing"<<endl;
    printstack(st);

}