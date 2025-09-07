#include<bits/stdc++.h>
using namespace std;

//using recursive method to check sorted
bool isSorted(stack<int>st)
{   
    //what if the stack we get is empty
    if(st.empty())return true;
    //get the top element 
    int a = st.top();
    st.pop();
    
    //then check again if the stack is empty or not 
    //a empty stack is sorted 
    if(st.empty())return true;

    //now the real comparision ,
    // if the stack's previous top-->"a"
    //and the number just beneath it is not in sorted fashion
    //then return false
    if(a < st.top())return false;

    bool ans = isSorted(st);
    
    st.push(a);
    return ans;
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(80);
    st.push(50);
    st.push(60);

    if(isSorted(st))
    {
        cout<<"this stack is sorted";
    }
    else{
        
        cout<<"this stack is not sorted";
    }
    return 0;
}