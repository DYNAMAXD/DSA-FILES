#include <iostream>
using namespace std;

class cmp 
{
    private:
    int re , im;

    friend cmpcalc ::sum(cmp a , cmp b);

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



class cmpcalc
{
    cmp x , y;

    public:

    cmpcalc(cmp a , cmp b)
    {
        x = a;
        y = b;
    }

    void sum(cmp a , cmp b)
    {
        cout << "nasduffnia" << endl;
    }
};

int main()
{
    return 0;
}