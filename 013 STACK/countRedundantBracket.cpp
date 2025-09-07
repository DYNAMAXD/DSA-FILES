//PROBLEM STATEMENT: we have to find the redundant parentnesis 


// for equation (2)*(5+6)
//(2) is the pair of redundant parenthesis


#include<bits/stdc++.h>
using namespace std;

void printstackch(stack<char>st)
{
    cout<<"printing the chars"<<endl;
    cout<<"top"<<endl<<" | "<<endl<<" V "<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<endl<<endl;
}
void printstack(stack<int>st)
{
    cout<<"printing the opr"<<endl;
    cout<<"top"<<endl<<" | "<<endl<<" V "<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<endl<<endl;
}

int countRedundant(string st)
{
    //this specific thing - that i need to use 2 stack - sparked in my mind as i was brainstorming this 
    //and then i suddenly figured that , whenever going inside a new bracket , 
    //we need to save the state of the previous bracket ,
    //just like we did in the operating system - or assembly level coding
    //that we need to save the state of the previous function into some
    //you guessed it - STACK MEMORY- which we will unwind when the call to that function is done
    //here in this case the unwinding is done 
    //when the brackets - or the scope of the brackets if you want to call it that - ends
    //so then the information - here the number of redundant brackets - is stored whenever it enters a new scope
    //basically whenever a new pair of brackets are encountered
    //and then the state - count- of the previous state is recovered when the scope ends
    //this was my basic idea behind this
    int n = st.size();

    stack<char> sta;
    stack<int> ops;
    int opr = 0;
    int count = 0;
    for(int i = 0 ; i < n ; i++)
    {
        char ch = st[i];
        if((ch == '+') || (ch == '-') || (ch == '*') || (ch == '/'))opr++;
        if((ch == '('))
        {
            sta.push(ch);
            ops.push(opr);
            opr = 0;
        }
        if(ch == ')')
        {
            if((sta.top()== '(') && opr == 0)
            {
                sta.pop();
                count++;
            }
            else if(sta.top() == '(')
            {
                sta.pop();
            }
            opr = ops.top();
            ops.pop();
        }
        //use this for debugging and checking
        // cout<<"running = "<<ch<<endl<<"count = "<<count<<endl;
        // printstack(ops);
        // printstackch(sta);
    }
    return count;
}
//another way clicked , it was something which would also do the task in one go , but 
//used only one stack
//it was given by SriRam
//that we dont even need another stack , just in one stack go on storing the "(" and operators ,
//and at the time of ")" we just need to check the top of the stack , 
//if it is a operator then 
//pop untill the "("  is found 
//else if there is "(" is in the top 
//then pop it , and increase the count by 1

int countRedun(string s)
{
    stack<char> st;
    int n = s.size();
    int count=0 ;
    for(int i = 0 ; i < n ; i++)
    {
        char ch = s[i];
        if((ch == '+') || (ch == '-') || (ch == '*') || (ch == '/')||(ch == '('))st.push(ch);
        if(ch == ')')
        {
            if(st.top() =='(')
            {
                st.pop();
                count++;
            }
            else
            {
                while(st.top() != '(')
                {
                    st.pop();
                }
                st.pop();
            }
        }
    }
    return count;
}


int main(){
    string st = "(2)*(5+6)";
    // string st = "(3)*(a + b)*(4(5)(741161651))"; 
    // string st = "( (3)+(8*5)) * (2+6) * ( ( (4+8)+(3) ) + (3) )";
    
    int ans = countRedundant(st);
    int ans = countRedun(st);
    cout<<ans;
    return 0;
}