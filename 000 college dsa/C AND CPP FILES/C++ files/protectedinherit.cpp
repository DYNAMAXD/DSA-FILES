#include<iostream>
using namespace std;

class a
{
    public:
    int ar ;
    int b;

    a()
    {
        cout << "a - base class constructor"<< endl;
        this->ar = 10;
        this->b = 20;
    }
};
class b
{
    public:
    int g ;
    int v;

    b()
    {
        cout << "b class constructor called"<< endl<<endl<<endl;
        this->g = 10;
        this->v = 20;
    }
};

class c : protected b , protected a
{
    public:
    c(int h)
    {
        cout << "sub class constructor called"<< endl;
        cout << h<< endl<<endl<<endl;
        a();
        cout <<this->a::ar <<this->a::b << endl<<"class a"<< endl;
        cout << this->g << this->v;
    }
};

int main(){
    c obj3(23);
    return 0;
}