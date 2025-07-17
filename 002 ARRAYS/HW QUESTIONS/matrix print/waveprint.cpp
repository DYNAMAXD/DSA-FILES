#include<iostream>
using namespace std;

int main(){
    int m[3][4] = {{1 , 2 , 3 , 4} , {5 , 6 , 7 , 9} , {10 , 11 , 12 , 13}};
    int b = 0;

    for(int i =0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            cout<<m[i][j]<<"  ";
        }
        cout<<endl;
    }

    //this is the wave pattern

    cout<<"this is the wave pattern1"<<endl;
    for(int a = 0 ; a < 4 ; a++){
        if(a%2 == 1)
        {
            for(int b = 2 ; b >=0 ; b--){
                cout<<m[b][a]<<"  ";
            }
        }
        if(a%2 == 0)
        {
            for(int b = 0 ; b < 3 ; b++){
                cout<<m[b][a]<<"  ";
            }
        }
    }   
    cout<<endl<<"this is the wave pattern2"<<endl;
    for(int a = 0 ; a < 4 ; a++){
        if(a%2 == 0)
        {
            for(int b = 2 ; b >=0 ; b--){
                cout<<m[a][b]<<"  ";
            }
        }
        if(a%2 == 1)
        {
            for(int b = 0 ; b < 3 ; b++){
                cout<<m[a][b]<<"  ";
            }
        }
    }   
    return 0;
}