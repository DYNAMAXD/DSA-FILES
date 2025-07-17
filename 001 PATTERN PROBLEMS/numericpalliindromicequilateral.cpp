#include<iostream>
using namespace std;

void thething(int size)
{
    for(int r = 0; r<size ; r++)
    {
        for(int d = 0 ; d < size-r-1 ; d++)
        {
            cout<<" ";
        }

        for(int n = 1; n <r+2 ; n++)
        {
            cout<<n;
        }

        for (int i = r; i > 0 ; i--)
        {
            cout<<i;
        }
        cout <<endl;
        
    }
}

void thething2(int size)
{
    int n = size;
    //sir method
    for(int r = 0 ; r < size ; r++)
    {
        for(int j = 0 ; j < size-r ; j++)
        {
            cout<<"n";
        }
        cout << endl;
    }
}
int main(){
    int size = 5;
    thething2(5);
}