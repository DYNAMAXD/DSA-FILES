#include<iostream>
using namespace std;

int main(){
    int size = 5;
    // cin>>size;

    for(int r = 0; r<size ; r++)
    {
        for(int pd = 0; pd < size - r - 1 ; pd++)
        {
            cout<<"_";
        }
        cout<<"*";
        for(int ds = 0 ; ds < r ; ds++)
        {
            cout<<"_*";
            //look in the figure , that the "_*" is a block which is always there
            //and number of "_*"s is always increasing in every row
            // so we can learn that in pattern problems we can group objects to ease out our job
        }
        cout<<endl;
        
    }
    return 0;
}