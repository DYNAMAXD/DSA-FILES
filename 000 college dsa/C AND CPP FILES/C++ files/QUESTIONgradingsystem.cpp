#include<iostream>

using namespace std;

int main(){
    int marks;
    cout<<"enter the marks"<<endl;
    cin>>marks;
    if (marks<25){
        cout<<"F"<<endl;
    }
    else if ((marks<=45)&&(marks>25)){
        cout<<"E"<<endl;
    }
    else if ((marks<=50)&&(marks>45)){
        cout<<"D"<<endl;
    }
    else if ((marks<=60)&&(marks>50)){
        cout<<"C"<<endl;
    }
    else if ((marks<=80)&&(marks>60)){
        cout<<"B"<<endl;
    }
    else{
        cout<<"A"<<endl;
    }
}