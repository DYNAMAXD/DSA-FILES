#include<iostream>

using namespace std;

int main(){
    int val_of_one , total_items;
    cout<<"enter the value of one item:"<<endl;
    cin>>val_of_one;
    cout<<"enter the number of items:"<<endl;
    cin>>total_items;

    int cost = val_of_one*total_items;

    if (cost > 1000){
        cost = cost*9/10;
        cout<<"total cost after discount = "<< cost<<endl;
    }
    else{ 
        cout<<"total cost  = "<< cost<<endl;
    }
    
}
