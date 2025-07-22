#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

//READ COMMENTS FROM main()
unordered_map<int , bool> chkRow;
unordered_map<int , bool> upperDiagonal;
unordered_map<int , bool> lowerDiagonal;

void saveState( int n , vector<vector<string>>&ans , vector<vector<char>>&board)
{
    //majdoori hai bas , ek baar dekh lena clear mind se , ye wala function to explain nai kar raha
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
    //apne ko sirf ye 3 map me check karna hai ki koi queen
    //kisi row ya lowerDiagonal ya upperDiagonal ko block to nai kar rahi 
    //agar kar rahi hai , toh apna "row""column" unsafe hai
    
    if(chkRow[row]  == true || lowerDiagonal[row+col] == true || upperDiagonal[row-col] == true)
    {
        //agar unsafe hai to false return kardo
        return false;
    }
    //warna to safe hi hai 
    return true;
}

void dsolve(int n ,  vector<vector<string>>&ans , vector<vector<char>>&board , int col)
{   
    //base case kya hoga 
    //jab apna column , out of bounds chala jayega 
    if(col == n)
    {
        //tabh board ka state save kar lena 
        saveState(n , ans , board);
        //aur return kar jana , kya pata aur bhi configurations ho
        return;
    }

    //apne ko apne "col" column ke sabhi rows
    //pe queen rakhna hai --> for loop use karenge
    for(int row = 0 ; row < n ; row++)
    {
        //abh queen ko rakhne ke pehle check karna 
        //ki kya queen ko board[row][column] pe rakhne pe attack to nai hoga
        if(isSafe(row , col , board))
        {
            //agar safe hoga to queen rakho
            //aur aage badh jaao
            //--GALTI-- 'q' single quotes pe hai
            board[row][col] = 'Q';

            //abh ye queen jis row , lowerDiagonal , upperDiagonal ko block karegi usko update karo
            //ye mapping ko revert back karna mat bhulna
            
            //--->[YE MAI BHUL JATA HU]<---
            chkRow[row] = true;
            lowerDiagonal[row + col] = true;
            upperDiagonal[row - col] = true;
            
            
            //baaki recursion ko dedo
            dsolve(n , ans , board , col+1);
            
            //yaha pe tabhi aayenge ,jabh wo niche wala return call hoga
            //matlab next col me koi place nai hai jaha pe queen place ho sakta hai
            //toh , iss queen ko relocate karo
            board[row][col] = '.';
            //abh ye queen jis-jis row , lowerDiagonal aur upperDiagonal ko block karegi usko wapis false karo
            //ye mapping ko revert back karna mat bhulna

            //--->[YE MAI BHUL JATA HU]<---
            chkRow[row] = false;
            lowerDiagonal[row + col] = false;
            upperDiagonal[row - col] = false;
        }
    }
    //abh ye return tabhi call hoga jab 
    //apne kisi col me queen place hi nai ho payegi
    //tabh kya karna hai 
    //pichle koi column wali queen ka place change karna hai
    return;
}

    int main() {
        int n = 5;
        vector<vector<string>> ans;

        //yaha pe GALTI ho sakti hai , vector<vector<int>> mat karna
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