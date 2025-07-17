#include<iostream>

using namespace std;

int main(){

    int m = 25;
    int* h = &m;
    cout<< h<< endl;
    cout<<*h<<endl;

    int** d = &h;
    int*** r = &d;
    cout<<d<<endl;
    cout<<r<<endl;
    cout<<***r<<endl;

    return 0;
}

