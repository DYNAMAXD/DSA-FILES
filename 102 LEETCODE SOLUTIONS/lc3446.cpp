#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> matr = {
        {1 ,  2 , 3 , 4  },
        {5 ,  6 , 7  , 8  },
        {9 , 10 , 11 , 12 },
        {13, 14 , 15 , 16 }
    };
 
    int n = matr.size();
    int m = matr[0].size();
    unordered_map<int , vector<int>>mapp;

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            mapp[i-j].push_back(matr[i][j]); 
        }
    }
    for(auto i : mapp)
    {
        sort(i.second.begin() , i.second.end());
        if(i.first < 0)
        {   
            // reverse(i.second.begin() , i.second.end());
        }
        cout<<i.first<<" -> ";
        for(auto j : i.second)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    } 
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            int a = mapp[i-j][mapp[i-j].size()-1]; 
            mapp[i-j].pop_back();
            cout<<"placing  "<<a<<"  at i , j--> "<<i<<"  "<<j<<endl;
            matr[i][j]  = a;
        }
    }
    cout<<endl<<endl;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {  
            cout<<matr[i][j]<<" "; 
        }
        cout<<endl;
    }
}