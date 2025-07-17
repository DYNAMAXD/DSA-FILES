#include <iostream>
using namespace std;

template<class t1 , class t2>
class c1{
    public:
    t1 x;
    t2 y , z;

    c1(t1 x , t2 y  ,t2 z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }   
    void display()
    {
        cout<<x <<endl<< y << endl << z<< endl;
    }
};

template<class c1 , class c2>
void f1(c1 a ,c2 b)
{
    cout<< a <<endl << b << endl;
}

int main()
{
    c1<int, char> obj1(10 , 's' , 'x');
    obj1.display();

    f1('3' ,5 );
}