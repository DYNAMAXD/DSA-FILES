#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


unordered_map<int , bool> chkRow;
unordered_map<int , bool> upperDiagonal;
unordered_map<int , bool> lowerDiagonal;

void saveState( int n , vector<vector<string>>&ans , vector<vector<char>>&board)
{
    vector<string> tempVec;
    for(int i = 0 ;i  < n;i++)
    {
        string tempStr = "";
        for(int j = 0 ; j < n ; j++)
        {
            tempStr+=board[i][j];
        }
        tempVec.push_back(tempStr);
    }
    ans.push_back(tempVec);
}

bool isSafe(int row , int col ,vector<vector<char>>&board )
{
    
    if(chkRow[row]  == true || lowerDiagonal[row+col] == true || upperDiagonal[row-col] == true)
    {
        return false;
    }
    return true;
}

void dsolve(int n ,  vector<vector<string>>&ans , vector<vector<char>>&board , int col)
{
    if(col == n)
    {
        saveState(n , ans , board);
        return;
    }
    for(int row = 0 ; row < n ; row++)
    {
        if(isSafe(row , col , board))
        {
            board[row][col] = 'Q';
            chkRow[row] = true;
            lowerDiagonal[row + col] = true;
            upperDiagonal[row - col] = true;

            
            dsolve(n , ans , board , col+1);

            board[row][col] = '.';
            chkRow[row] = false;
            lowerDiagonal[row + col] = false;
            upperDiagonal[row - col] = false;
        }
    }
    return;
}

    int main() {
        int n = 5;
        vector<vector<string>> ans;

        vector<vector<char>>board(n , vector<char>(n , '.'));
        int col = 0;
        dsolve(n , ans , board , col);
        
        for(auto i : ans)
        {
            for(auto j : i)
            {

                cout<<j<<endl;
            }
            cout<<endl<<endl;
        }
    }