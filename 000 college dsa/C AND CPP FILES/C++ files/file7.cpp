#include<iostream>
#include<iomanip>
using namespace std;
int c = 45;
int main(){
    // int a , b , c;
    // cout<<"enter the value of a :";
    // cin>>a;
    // cout<<"enter the value of b :";
    // cin>>b;
    // cout<<"enter the value of c :";
    // cin>>c;

    // cout<<"the value of local c is :"<<c<<endl;
    // cout<<"the value of global c is:"<<::c<<endl;

    // cout<<"the size of 34.4f"<<sizeof(34.3f);

    int x=123456789;

    // int & y = x;
    // cout<<x<<endl<<y<<endl;

    cout<<"the value of           x: "<<x<<endl;
    cout<<"THE value of x with setw: "<<setw(15)<<x << endl;
    cout<<"THE value of x with setw: "<<setw(15.599999999999)<<x << endl;
    cout<<"THE value of x with setw: "<<setw(-15)<<x << endl;

    return 0;
}