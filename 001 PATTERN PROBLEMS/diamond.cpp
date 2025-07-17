#include<iostream>
#include<cmath>
using namespace std;

void solidpyramid(int size)
{
    int midrow = (size - 1)/2;
    for (int r = 0; r < size ; r++)
    {
        for (int pd = 0 ; pd < abs(midrow - r) ; pd++)
        {
            cout<<"_";
        }
        for(int s = 0; s < 2*(midrow - abs(midrow - r)) + 1 ; s++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void hollowpyramid(int size)
{
    int midrow = (size - 1)/2;
    for (int r = 0; r < size ; r++)
    {
        for (int pd = 0 ; pd < abs(midrow - r) ; pd++)
        {
            cout<<"_";
        }
        cout<<"*";

        for(int s = 0; s < 2*(midrow - abs(midrow - r)) - 1 ; s++)
        {
            cout<<"_";
        }
        ((r != 0 )&(r!=size-1))?cout<<"*":cout<<"";
        cout<<endl;
    }
}


int main(){
    int size = 7;

    solidpyramid(7);
    hollowpyramid(7);
    return 0;
}