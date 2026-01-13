#include<bits/stdc++.h>
using namespace std;

class st
{
    public:
    deque<int> q;
    void push(int n)
    {
        q.push_back(n);
    }
    void pop()
    {
        q.pop_back();
    }
    int front(){
        q.back();
    }
    void printall()
    {
        deque<int> temp = q;
        while(!q.empty())
        {
            cout<<q.back()<<endl;
            q.pop_back();
        }
    }
};

class qee
{
    public:
    stack<int> sta;
    void push(int n )
    {
        sta.push(n);
    }

    bool isempty()
    {
        return sta.empty();
    }

    void pop()
    {
        // vecto

        //do a vector implementation of this , it will also take o(n) time itself
        
        //have another stack , and then pop all the things in the temp stack ,
        //then pop i from the back 
        // then we will push it back to the original stack
    }

    void printall()
    {
        cout<<endl;
        vector<int>temp ;
        stack<int>temp1 = sta;
        while(!temp1.empty())
        {
            temp.push_back(temp1.top());
            temp1.pop();
        }
        reverse(temp.begin() , temp.end());

        for(auto i : temp)
        {
            cout<<i <<" ";
        }
    }

};

int main(){
    // st sta;
    // sta.push(3);
    // sta.push(4);
    // sta.push(5);
    // sta.push(36);

    // sta.printall();

    qee q1;

    q1.push(1);
    q1.push(3);
    q1.push(5);
    q1.push(6);
    q1.push(8);
    
    q1.printall();
    
    q1.pop();

    q1.printall();
    return 0;
}