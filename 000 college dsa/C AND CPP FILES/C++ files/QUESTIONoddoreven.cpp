#include<iostream>

using namespace std;

int main(){
    int int1;
    cout<<"Enter the number you want to check:"<<endl;
    cin>>int1;
    if (int1%2 == 0){
        cout<<"The entered number "<<int1<<" is even number"<<endl;
    }
    else{
        cout<<"The entered number "<<int1<<" is odd number"<<endl;
    }
}