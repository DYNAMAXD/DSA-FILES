#include<iostream>
using namespace std;

class a
{
    public:
    int var1 = 10;

    virtual void disp()
    {
        cout <<"base class function called"<<endl;
    }
};

class b : public a
{
    public:
    int val2 = 20;

    void disp()
    {
        cout << "derived class function called"<< endl;
    }
};

int main(){
    a obj1;
    b obj2;
    obj1.disp();
    obj2.b::disp();

    a * ptr1;
    ptr1 = &obj2;

    ptr1 -> disp();
    return 0;
}