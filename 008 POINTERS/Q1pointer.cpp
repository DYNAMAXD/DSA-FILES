#include<iostream>
#include<vector>
using namespace std;

int main(){
    int i[3][5] = {{1 , 2 , 3 , 4 , 5},
                {6 , 7  ,8 , 9 , 10},
                {11 , 12 , 13 , 14 , 15}};

    // int ** n = &i;
    int *n = &i[0][0];
    cout<<*(*(i + 1))+100<<endl;
    return 0;
}   