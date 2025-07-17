#include <iostream>
using namespace std;

class c1 
{
    public:
    int val1;
    void sval1()
    {
        cout << "function of class c1"<< endl;
    }
};

class c2
{
    public:
    int val2;
    void sval2()
    {
        cout << "funciton of class c2"<< endl;
    }

};

class c3 : public c1 , public c2
{
    public :
    int val3;
    c3()
    {
        sval1();
        sval2();
    }
};

int main()
{
    c3  obj1;
}