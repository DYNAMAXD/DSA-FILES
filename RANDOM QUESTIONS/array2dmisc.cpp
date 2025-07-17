#include<iostream>
using namespace std;

int main(){
    int arr[4][4];
    for(int r = 0; r < 4 ; r++)
    {
        for(int c = 0 ; c< 4 ; c++)
        {
            arr[r][c] = r*c;
        }
    }
    for(int r = 0; r < 4 ; r++)
    {
        for(int c = 0 ; c< 4 ; c++)
        {
            cout<<arr[r][c] << " ";
        }
        cout<<endl;
    }


    for (int i = 0; i < 4; i++)
    {
        cout<<arr[i][4-i-1]<<endl;
    }
    
    return 0;

}