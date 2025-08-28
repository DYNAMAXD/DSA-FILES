//printing the matrix in a zigzag fashion


#include<bits/stdc++.h> 
using namespace std;

int main()
{
    vector<vector<int>> vec = {
        {10  ,  20 ,  30 , 110 , 310} , 
        {40  ,  50 ,  60 , 120 , 320} ,
        {70  ,  80 ,  90 , 130 , 330} ,
        {210 , 220 , 230 , 240 , 340} , 
        {410 , 420 , 430 , 440 , 450}
    };
    
    int rows = vec.size();
    int cols = vec[0].size();
    int r=  0;
    int c = 0;
    int move = 1;
    for(int i = 0 ; i < rows*cols ; i++)
    {
        cout<<vec[r][c]<<"== r , c -->"<<r<<" "<<c<<"  move = "<<move<<endl;
        r-=move;
        c+=move;

        if(r <0 || c <0 || r ==rows || c == cols)move*=-1;

        if(r < 0)
        {
            r = 0;
        }
        if(c < 0)
        {
           c = 0;
        }
        if(r >= rows)
        { 
            r=rows-1; 
            c++; 
        }
        if(c >= cols)
        { 
            c=cols-1; 
            r++; 
        }
    }
}