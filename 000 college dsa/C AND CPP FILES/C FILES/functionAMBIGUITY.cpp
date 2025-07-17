#include <iostream>
using namespace std;

class a
{
    public:
    void function1()
    {
        cout << "function of class a" << endl;
    }
};

class b 
{
    public:
    void function1()
    {
        cout << "function of class b"<< endl;
    }
};

class c : public a , public b
{
    public:
    int a;
};

int main()
{   
    c obj1;
    obj1.a::function1();
    obj1.b::function1();

}