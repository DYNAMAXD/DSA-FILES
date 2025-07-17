#include<iostream>
using namespace std;

void specialdiamond(int size)
{
    int midrow = (size -1)/2;

    for (int r = 0; r < size  ; r++)
    {
        for(int ps = 0 ; ps < abs(r - midrow) ; ps++)//ps = prestars
        {
            cout<<"*";
        }

        for(int d = 0 ; d < 2*(midrow - abs(midrow - r)) + 1 ; d++)//d = dashes
        {
            cout<<"_";
        }

        for (int pos = 0; pos < abs(r - midrow) ; pos++)//pos = post stars
        {
            cout<<"*";
        }
        
        cout<<endl;
    }

    
}

int main(){
    specialdiamond(15);
    return 0;
}