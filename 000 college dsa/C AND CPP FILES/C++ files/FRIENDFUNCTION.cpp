#include <iostream>
using namespace std;

class cmp
{
    private:
    int re , im;
    // this here is the friend function 
    friend cmp cmpsum(cmp a , cmp b);
    public:
    cmp(int re , int im)
    {
        this -> re = re;
        this -> im = im;
    }
    int showre()
    {
        return this -> re;
    }
    int showim()
    {
        return this -> im;
    }
    void show()
    {
        cout << showre() << " + "<< showim() <<"i"<< endl;
    } 
};

// void cmpsum(cmp a , cmp b)
// {
//     cout <<a.re + b.re << " + " << a.im + b.im << "i" << endl;
// }

cmp cmpsum(cmp a , cmp b)
{
    cmp sum(0 , 0);
    sum.im = a.im + b.im;
    sum.re = a.re + b.re;
    return sum;
}

int main()
{
    cmp a(5 , 8);
    a.show();

    cmp b(3 , 12);
    b.show();

    cmpsum(a , b).show();
    return 0;
}