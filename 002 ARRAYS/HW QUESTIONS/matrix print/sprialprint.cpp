#include<iostream>
#include<vector>
using namespace std;
int main(){
        vector<vector<int>> matrix = {{1  , 2  , 3  , 4  , 5 } ,
                                      {6  , 7  , 8  , 9  , 10} , 
                                      {11 , 12 , 13 , 14 , 15} ,
                                      {16 , 17 , 18 , 19 , 20}  };
        vector<int> ans;
        int m =  matrix.size();
        int n = matrix[0].size();
        int totalelements = m*n;
        int count = 0;
        int sr = 0;
        int sc = 0;
        int er = m-1;
        int ec = n-1;

        while(count < totalelements){
            //print starting row
            for(int i = sc ; i <= ec && count < totalelements ; i++)
            {
                cout<<matrix[sr][i]<<"  ";
                ans.push_back(matrix[sr][i]);
                count++;
            }
            sr++;
            //print last column
            for(int i = sr ; i <= er && count < totalelements; i++)
            {
                cout<<matrix[i][ec]<<"  ";
                ans.push_back(matrix[i][ec]);
                count++;            
            }
            ec--;
            //print end row
            for(int i = ec ; i >=sc && count < totalelements; i--)
            {
                cout<<matrix[er][i]<<"  ";
                ans.push_back(matrix[er][i]);
                count++;
            }
            er--;
            //print start column
            for(int i = er ; i >= sr && count < totalelements; i--)
            {
                cout<<matrix[i][sc]<<"  ";
                ans.push_back(matrix[i][sc]);
                count++;
            }
            sc++;
        }
 
    }
