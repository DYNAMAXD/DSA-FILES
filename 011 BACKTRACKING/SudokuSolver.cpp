#include<iostream>
#include<vector>
using namespace std;

 
    bool isValid(int row , int col , char d , vector<vector<char>>& board )
    {
        for(int i = 0 ; i < 9 ; i++)
        {
            if(board[row][i] == d)return false;
            if(board[i][col] == d)return false;
        }

        //3x3 sub matrix
        for(int subrow = 3*(row/3) ; subrow <3*((row/3) + 1) ; subrow++ )
        {
            for(int subcol = 3*(col/3) ; subcol <3*((col/3) + 1) ; subcol++ )
            {
                if(board[subrow][subcol] == d)return false;
            }
        }
        return true;
    }


    bool dsolve(vector<vector<char>>& board)
    {
        // int a = board_size();
        // int b = board[0]_size(); 
        // a = 9 and b = 9 always given
        
        for(int row = 0 ; row < 9 ; row++)
        {
            for(int col = 0 ; col < 9 ; col++)
            {
                //yaha tak , bas sabhi jagah ko explore kar rahe hai
                if(board[row][col] == '_')
                //--GALTI-- "" use nai karna '' use hoga
                //bas check kar rahe hai ki kaha pe '_' --> empty spaces hai
                {
                    for(char d = '1' ; d <= '9' ; d++)
                    //abh '_' ke jagah , 1 se 9 digits ko daalna hai
                    {
                        if(isValid(row , col , d , board))
                        //har bar check karenge ki agar 
                        //iss board pe isi specified row , col me agar d rakhenge to 
                        //kya valid hoga
                        {
                            board[row][col] = d;
                            bool solve = dsolve(board);
                            //ek baar rakh ke dekhenge , phir dekhenge ki aage ka solve ho paaya
                            //ke nai
                            if(solve == true)
                            {
                                //agar aage ka solve ho gaya to true return kar denge
                                return true;
                                //ye wala true , last case me aayega , 
                                //jab apna pura board traverse ho chuka hoga
                                //aur sabhse niche wala return true run hoga
                            }
                            else
                            {
                                //warna backtrack karenge , aur uspe phir dot rakhenge
                                //aur baaki numbers try karenge
                                board[row][col] ='_';
                            }
                        }
                    }
                    //abh ye wala false tabhi run hoga jab ,
                    //koi free space milege
                    //aur hum logo ne sabhi possible 1 -> 9 digits rakh ke check kar lenge 
                    //aur koi bhi digit valid nai hoga 
                    //toh false return kardenge , ye iss baat ko signify karega ki 
                    //apna koi pichle wala digit galat hai 
                    //isi false k karan uppar me wo "solve" wala condition use hua hai

                    return false;
                }
            }
        }
        //ye wala true tabhi run hoga 
        //jab pure board me koi bhi 
        //free space nai hoga
        //agar koi free space nai hai 
        //matlab pura solve ho gaya
        return true;
    }


    int main(){
    vector<vector<char>> board = {
    {'5','3','_','_','7','_','_','_','_'},
    {'6','_','_','1','9','5','_','_','_'},
    {'_','9','8','_','_','_','_','6','_'},
    {'8','_','_','_','6','_','_','_','3'},
    {'4','_','_','8','_','3','_','_','1'},
    {'7','_','_','_','2','_','_','_','6'},
    {'_','6','_','_','_','_','2','8','_'},
    {'_','_','_','4','1','9','_','_','5'},
    {'_','_','_','_','8','_','_','7','9'}
                                        };

        
        cout<<"question"<<endl;
        for(auto i: board)
        {
            for(auto j : i)
            {
                cout<<j<<"  ";
            }
            cout<<endl;
        }
        cout<<endl<<endl<<endl;
        dsolve(board);
        
        cout<<"solution"<<endl;
        for(auto i: board)
        {
            for(auto j : i)
            {
                cout<<j<<"  ";
            }
            cout<<endl;
        }
    }

//waise question me empty space k liye '.' use hua hai par maine '_' use kiya