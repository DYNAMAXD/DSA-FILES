#include<iostream>
using namespace std;

class ovld
{
    public:

    ovld(int a , int b)
    {
        this -> a = a;
        this -> b = b;
    }
    int a ;
    int b ;
    
    void operator+ (ovld b)
    {
        cout << this -> a * b.a<< endl;
        cout << "function is overloaded and can be controlled now >:)" << endl;
    }

};

int main(){
    
    ovld a(4 , 6) ;
    ovld b(2 , 9) ;

    a + b;
    return 0;
}