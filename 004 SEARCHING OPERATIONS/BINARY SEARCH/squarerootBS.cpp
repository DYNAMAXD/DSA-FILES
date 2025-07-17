#include<iostream>
using namespace std;

void sqrrt(int a)
{
    double s = 0;
    double e = a;
    double mid = s + (e - s)/2;
    double ans = -1;
    while(s < e)
    {
        if (mid*mid < a)
        {
            ans = mid;
            s = mid + 0.001;
        }
        else
        {
            e = mid-0.001;
        }
        mid = s + (e - s)/2;
    }
    cout<<ans;
}
//the fuking goated method!!

int main(){
    sqrrt(63);
    return 0;
}