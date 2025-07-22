#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

unordered_map<int,int>checkRow;
unordered_map<int,int>checkUDiag;
unordered_map<int,int>checkLDiag;


void storeAns(vector<vector<vector<char>>>&ans , vector<vector<char>>&board)
{
    vector<vector<char>>temp;
    for(auto i : board)
    {
        vector<char>temp2;
        for(auto j : i)
        {
            temp2.push_back(j);
        }
        temp.push_back(temp2);
    }
    ans.push_back(temp);
}

bool isSafe(vector<vector<char>>&board  , int row , int col)
{
    if(checkRow[row] == 1)
    {
        return false;
    }
    if(checkUDiag[row+col] == 1)
    {
        return false;
    }
    if(checkLDiag[row-col] == 1)
    {
        return false;
    }
    return true;
}

void solve(vector<vector<vector<char>>>&ans , vector<vector<char>>&board , int n ,  int col )
{
    if(col == n)
    {
        storeAns(ans , board);
        return ;
    }
    for(int row = 0 ; row < n ; row++)
    {
        if(isSafe(board , row , col))
        {
            board[row][col] = 'Q';
            
            checkRow[row] = 1;
            checkUDiag[row + col] = 1;
            checkLDiag[row - col] = 1;


            solve(ans , board ,n , col+1);


            board[row][col] = '.';
            checkRow[row] = 0;
            checkUDiag[row + col] = 0;
            checkLDiag[row - col] = 0;
        }
    }
    return ;
}


int main(){
    int n = 4;
    vector<vector<char>>board(n , vector<char>(n));
    vector<vector<vector<char>>>ans;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            board[i][j] = '.';
        }
    }
    solve(ans , board , n , 0);
    
    for(auto i : ans)
    {
        for(auto j:i)
        {
            for(auto k:j)
            { 
                cout<<k;
            }
            cout<<endl;
        }
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
    }

    cout<<"there are "<<ans.size()<<" different solutions ";
    return 0;
}