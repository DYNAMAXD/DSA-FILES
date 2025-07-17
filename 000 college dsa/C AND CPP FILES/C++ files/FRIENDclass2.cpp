#include <iostream>
using namespace std;

class c1
{
    private:
    int val1;
    int val2;

    friend class c2;


    public:

    c1(int a , int b)
    {
        this -> val1 = a;
        this -> val2 = b;
    }

    int f1()
    {
        cout << "function 1 called"<< endl;
        return 5;
    }
};

class c2
{
    public:
    void f2(c1 a , c1 b)
    {
        cout << a.val1 + b.val1<<"______" << a.val2 - b.val2<<"_________" << a.f1() << endl;
    }
};

int main()
{
    c1 h(3 , 8);
    c1 m(5 , 3);
    c2 y;
    y.f2(h , m);
    return 0;
}