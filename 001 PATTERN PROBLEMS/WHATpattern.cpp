#include<iostream>
using namespace std;

void whatpattern(int size)
{
    for (int r = 0 ; r < size ; r++)
    {
        for(int a = 0; a < r ; a++)
        {
            cout<<(char)(a+65); 
        }
        for(int b = r; b >= 0; b--)//this is the crucial part
        {
            cout<<(char)(b+65); 
        }

    cout<<endl;
    }
}

int main(){
    whatpattern(10);
    whatpattern(3);
    return 0;
}