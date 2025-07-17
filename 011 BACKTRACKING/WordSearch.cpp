#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;


    bool haiKya(vector<vector<char>>& board, string &word , vector<vector<int>>& visited , int row , int col, int a) {
        
        //base case , 
        //agar apan  word me iterate karte karte last tak pahuch gaye
        //toh return true kar dena
        if(a == word.size())return true;
        
        //baaki saare base cases , out of bounds of board , aur agar already visited hai
        if(row <0 || row ==board.size() || col < 0 || col == board[0].size())
        {
            return false;
        }
        //agar already visited hai to bhi return kar jaao
        if(visited[row][col] == 1)
        {
            return false;
        }
        
        bool leftMeHaiKya ;
        bool rightMeHaiKya ;
        bool upparMeHaiKya ;
        bool downMeHaiKya ;
        
        if(board[row][col] == word[a])
        {
            visited[row][col] = 1;
            //check left
            leftMeHaiKya = haiKya(board , word ,visited, row , col-1 ,a+1 );
            //check right
            rightMeHaiKya = haiKya(board , word ,visited, row , col+1 ,a+1 );
            //check up
            upparMeHaiKya = haiKya(board , word ,visited, row-1 , col ,a+1 );
            //check down
            downMeHaiKya = haiKya(board , word ,visited, row+1 , col ,a+1 );
            
            //sabhi directions me explore kar ke 
            //backtrack kar le
            visited[row][col] = 0;
        }
        else
        {
            return false;
        }
        //abh ye dekh ki agar kisi direction se answer aaya?
        return leftMeHaiKya||rightMeHaiKya||upparMeHaiKya||downMeHaiKya;
    }
    
    
    bool exist(vector<vector<char>>& board, string word) {
        
        for (int i = 0; i < board.size(); ++i) {
            
            
            for (int j = 0; j < board[0].size(); ++j) {
                
                
                vector<vector<int>> visited(board.size(), vector<int>(board[0].size(), 0));
                if (haiKya(board, word, visited, i, j, 0))
                return true;    
            }   
        }
        return false;
    }



int main(){
    
    return 0;
}