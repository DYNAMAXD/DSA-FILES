#include <iostream>
using namespace std;

class baseclass
{
    private:
    int val1;

    protected:
    int val5;

    public:
    int val3;
    
    // baseclass(int val1 , int val3 ,int val5)
    // {
    //     sval1(val1);
    //     this ->val3 = val3;
    //     this ->val5 = val5;
    // }


    void stat()
    {
        cout << endl;
        gval1();
        gval3();
        gval5();
        cout << endl;
    }

    void gval1()
    {
        cout <<"val1 = "<< val1<<endl;
    }

    void sval1(int value)
    {
        this -> val1 = value;
    }

    void gval3()
    {
        cout <<"val3 = " << val3 << endl;
    }

    void sval3(int val3)
    {
        this ->val3 = val3;
    }      
    void gval5()
    {
        cout <<"val5 = "<< val5 << endl;
    }

    void sval5(int val5)
    {
        this ->val5 = val5;
    }
};


class subclass1 : public baseclass
{
    public :
    int val2;

    void gval2()
    {
        cout <<"val2 =  "<< val2 << endl;
    }

    void sval2(int val2)
    {
        this -> val2 = val2;
    }
};

int main()
{
    baseclass b1;

    b1.sval1(100);
    b1.stat();
    b1.sval5(500);
    b1.stat();
    // b1.sval2(123);
    // b1.gval2();
}