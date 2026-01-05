#include<bits/stdc++.h>

using namespace std;

void printFirstNegative(vector<int>& arr , int n)
{ 

    deque<int> q;
    vector<int> ans;
    int i = 0;
    int j = 0;
    while(j < n-1)
    {
        if(arr[j]<0)q.push_back(arr[j]);
        j++;
    }

    while(j < arr.size())
    { 
        int a = arr[i];
        int b = arr[j];
         
        if(b < 0)q.push_back(b);
        
        if(q.empty())
        {
            ans.push_back(0);
        } 
        else{
            ans.push_back(q.front());
        }
        
        if(a == q.front())
        {
            q.pop_front();
        }

        i++;
        j++;
    }


    for(auto it : ans)
    {
        cout<<it<<"  ";
    }
}

int main()
{
    vector<int>vec = {1,2,3,-4,-5,6,7};
    int n = 3;

    printFirstNegative(vec , n);
}