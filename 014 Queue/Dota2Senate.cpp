#include<bits/stdc++.h>

using namespace std;

string solve(string st)
{
    deque<int> rq , dq;

    int i =0 ;
    //firstly we will separate all the members into different deque
    // as the radiant queue and the dire queue , 
    // we will have the indices of the members in that
    while(i < st.size())
    {
        if(st[i] == 'R')rq.push_back(i);
        else dq.push_back(i);
        i++;
    }

    while(!rq.empty() && ! dq.empty())
    {
        // then we will take the front of the both dq and rq
        int rfront = rq.front();
        int dfront = dq.front();
        // we will then remove the person from the front
        rq.pop_front();
        dq.pop_front();
        // and then the person in the front , or has the lower index will ban the other person
        // so we will check the indices of the two ,
        //  then we will push the one with the lower value 
        //but will push the next integer of the i , 
        // as it will denote that their turn will come after the full iteration 
        if(rfront < dfront){
            rq.push_back(i++);
        }
        else{
            dq.push_back(i++);
        }
    }
    if(!dq.empty())return "Dire";
    return "Radiant";
}

int main()
{
    string st = "DRRDRDRDRDDRDRDR";

    cout<<solve(st);

}