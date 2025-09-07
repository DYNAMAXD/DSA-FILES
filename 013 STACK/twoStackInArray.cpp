#include<bits/stdc++.h>
using namespace std;


class stackk
{
    public:
    int n;
    int top1=-1;
    int top2 = n;
    int* arr;
    stackk(int c)
    {
        this -> top1 = -1;
        int * temp = new int[c];
        this->n = c;
        this->top2 = c;
        this->arr = temp; 
    }

    void push1(int val)
    {
        if(top1 + 1== top2)
        {
            cout<<"Stack overflow"<<endl;
            return ;
        }
        top1++;
        arr[top1] = val;
    }
    void push2(int val)
    {
        if(top1 + 1== top2)
        {
            cout<<"Stack overflow"<<endl;
            return ;
        }
        top2--;
        arr[top2] = val;
    }
    int pop1()
    {
        if(top1 == -1)
        {
            cout<<"Stack underflow"<<endl;
            return -1;
        }
        top1--;
    }
    int pop2()
    {
        if(top2 == n)
        {
            cout<<"Stack underflow"<<endl;
            return -1;
        }
        top2++;
    }
    void prin()
    {
        cout<<endl;
        cout<<"this is stack1-->";
        for(int i = 0 ; i <= top1;  i++)
        {
            cout<<arr[i]<<"  ";
        }
        cout<<endl;
        cout<<"this is stack2-->";
        for(int i = n-1; i >=    top2;  i--)
        {
            cout<<arr[i]<<"  ";
        }
        cout<<endl;
    }
};
int main(){
    stackk st(5);

    st.push1(10);
    st.push1(20);
    st.prin();
    
    st.push2(90);
    st.push2(80);
    st.push2(70);
    st.prin();
    
    st.push1(12);
    st.push1(12);
    st.prin();
    
    st.pop1();
    st.pop1();
    st.pop1();
    st.prin();
    return 0;
}