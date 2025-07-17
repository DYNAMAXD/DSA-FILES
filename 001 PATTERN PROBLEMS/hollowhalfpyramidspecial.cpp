#include<iostream>

using namespace std;

void numericpyramidhollow(int size)
{
    for (int r = 0 ; r < size-1 ; r++)
    {
        int d;
        cout<<1;

        for(int d = 0 ; d < r-1 ; d++)
        {
            cout<<" ";
        }
        (r)?cout<<r+1:cout<<"";
        
        cout<<endl;
    }
    for (int n = 1; n < size+1; n++)
    {
        cout<<n;
    }
}


void numericpyramidhollowinverted(int size)
{
    for(int n = 1 ; n < size +1 ; n++)
    {
        cout<<n;
    }
    cout<<endl;
    for(int r = 0 ; r < size-1 ; r++)
    {
        cout<<r+2;
        for (int  n = 0; n < size - r -3; n++)
        {
            cout<<"_";
        }
        (r!=size-2)?cout<<size:cout<<"";
        cout<<endl;
        
    }
}


void numericpyramidhollowinverted2(int size)
{
    //sir method , seems easy
    for(int r = 0 ; r<size ; r++)
    {
        for(int n = r+1 ; n<size+1 ; n++ )
        {
            if((n == r+1 )||(n == size)||(r==0))
            {
            cout<<n;
            }
            else
            {
                cout<<"_";
            }
        }
        cout<<endl;
    }
} 


int main()
{
    numericpyramidhollowinverted2(5);
    return 0;
}