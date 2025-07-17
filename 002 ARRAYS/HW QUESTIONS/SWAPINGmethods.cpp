#include <iostream>
using namespace std;

void usingtempvar(int a , int b)
{
    int c;
    c = a;
    a = b;
    b = c;
    cout <<"a = " <<a << " b = "<<b<<endl;

}

void usingplusminus(int a , int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    cout <<"a = " <<a << " b = "<<b<<endl;
}

void usingmultiplydivide(int a , int b)
{
    a = a*b;
    b = a/b;
    a = a/b;
    cout <<"a = " <<a << " b = "<<b<<endl;
}

void usingxor(int a , int b)
{
    a = a ^ b;
    b = a ^(b);
    a = a ^(b);
    
    cout <<"a = " <<a << " b = "<<b<<endl;
}

void oneliner(int a,  int b)
{
    int x = a , y = b;
    x = (x * y) / (y = x);
    //here stepwise things going on are
    //firstly the (x*y) and (y = x) is done at the same time 
    //then x is (assigned to x*y/x which is )equal to y
    //the same is followed to other two cases
    cout <<"a = " <<x << " b = "<<y<<endl;


    x = a ; y = b;
    x = x ^ y ^ (y = x);
    cout <<"a = " <<x << " b = "<<y<<endl;


    x = a ; y = b;
    x = x + y - (y = x);
    cout <<"a = " <<x << " b = "<<y<<endl;

}


int main()
{
    int a = 6 ,b = 88;
    // usingtempvar(a , b);
    // usingplusminus(a , b);
    // usingmultiplydivide(a , b);
    // usingxor(a , b);
    // oneliner(a , b);
    
}