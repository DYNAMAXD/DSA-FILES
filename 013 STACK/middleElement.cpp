#include<bits/stdc++.h>
using namespace std;
//did it using the recursive stack , 
//i have done it without using a explicit stack , 
//instead i have used the internal stack of the the recursive calls for this
int midEle(stack<int> st , int count)
{
    if(count == 0)return st.top();
    int a = st.top();
    st.pop();
    int ans = midEle(st , count-1);
    st.push(a);
    return ans;
}

int main(){
    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(80);
    st.push(90);

    cout<<st.size()<<endl;
    cout<<"the middle element of the stack is "<<midEle(st , st.size()/2);
    return 0;
}