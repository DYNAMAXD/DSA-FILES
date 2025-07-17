#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main()
{
    vector<int> v = {1 , 3,2 , 3, 2 , 3, 4, 5, 5};

    unordered_map<int , int> m;

    for(int i = 0 ; i < v.size() ; i++)
    {
        m[v[i]]++;
    }

    for(int i = 0 ; i , v.size() ; i++)
    {
        if(m[v[i]] > 1)
        {
            cout<<v[i]<<endl;
            break;
        }
    }
}