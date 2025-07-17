#include<iostream>
using namespace std;

int main(){
    int n =4;
    for (int row = 1; row < n+1; row++)
    {
        for (int dash = 0; dash < n - row; dash++)
        {
            cout << " ";
        }
        
        for (int star = 0; star < row; star++)
        {
            cout << "* ";
        }
        cout <<"\n";
        
    }
    
    return 0;
}