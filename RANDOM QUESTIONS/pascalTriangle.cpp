#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> pascal;        
    vector<int> temp;
    
    for(int row = 0 ; row < numRows ; row++)
    {
        temp.clear();
        for(int col = 0 ; col <= row ; col++)
        { 
            if(row == 0 || col == 0 || col == row)
            { 
                temp.push_back(1);
            }
            else
            {
                temp.push_back(pascal[row-1][col-1] + pascal[row-1][col]);
            }
        }
        pascal.push_back(temp);
    }
    return pascal;
}

int main()
{
    int numRows = 10;

    vector<vector<int>>pascal = generate(numRows);

    for(auto i : pascal)
    {
        for(auto j : i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}