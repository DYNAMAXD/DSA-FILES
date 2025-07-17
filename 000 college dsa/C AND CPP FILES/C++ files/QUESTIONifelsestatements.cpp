#include<iostream>

using namespace std;

int main(){
    // std::cout<<"wow this is getting somewhere";
    int age;
    cout<<"tel me yor age"<<endl;
    cin>>age;

    // if (age<18){
    //     cout<<"You can not vote"<<endl;
    // }
    // else if(age == 18){
    //     cout<<"oh your age is 18 wow"<<endl;
    // }
    // else{
    //     cout<<"you can vote"<<endl;
    // }

    switch(age){
        case 23:
        cout<<"what the flip"<<endl;
        break;
        default:
        cout<<"huh"<<endl;
        break;
    }
    cout<<"program ends here:"<<endl;
    return 0;
}