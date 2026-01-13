#include<bits/stdc++.h>
using namespace std;

//we can try hash maping
// string fnr(string & st)
// {
//     unordered_map<char , int> mapp;
//     string ans;
//     for(auto i : st)
//     {
//         if(mapp.find(i) == mapp.end())
//             {
//                 mapp[i] = 1;
//                 ans+=i;
//             }
//         else
//         {
//             ans+="#";
//         }
//     }
//     return ans;
// }

string fnr(string& st)
{
    unordered_map<char , int> mapp;
    deque<char> dq;
    string ans = "";

    // for(auto i : st)
    // {
    //     if(mapp[i] >= 1)
    //     {
    //         if(dq.front() == i)
    //         {
    //             dq.pop_front();
    //             ans+=("#"); 
    //             mapp[i]++;
    //         }
    //         else{
    //             ans += dq.front();
    //             mapp[i]++;
    //         }
    //     }
    //     else{
    //         mapp[i]=1;
    //         dq.push_back(i);
    //         ans+=dq.front();
    //     }
    // }

    for(auto i : st)
    {
        mapp[i]++;
        dq.push_back(i);

        while(!dq.empty() && mapp[dq.front()]>1)
        {
            dq.pop_front();
        }

        if(dq.empty())
        {
            ans+="#";
        }
        else
        {
            ans+=dq.front();
        }
    }
    return ans;
}

int main(){
    string st = "aabadabbajabba";

    cout<<fnr(st);
    return 0;
}