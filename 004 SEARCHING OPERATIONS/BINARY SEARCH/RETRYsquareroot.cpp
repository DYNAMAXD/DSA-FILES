#include<iostream>

using namespace std;

double square(double num)
{
    double s = 0;
    double e = num;
    double mid = s + (e - s)/2;
    double prod = mid*mid;
    double ans;
    while(s <= e)
    {
        mid = s + (e - s)/2;
        prod = mid*mid;

        if (prod == num)
        {
            return mid;
        }

        if (prod < num)
        {
            ans = mid;
            s = mid+1;
        }
        else
        {
            e = mid-1 ;
        }


    }
    return ans;
}


float advsquare(double num , double acc)
{
    double ans = square(num);
    double finalans = ans ;
    double offset = 1;
    
    for(double i = 0 ; i < acc ; i++)
    {
        offset /=10;

        while(ans*ans < num)
        {
            cout<<ans<<"--->"<<ans*ans<<"  "<<num<<endl;
            finalans = ans;
            ans+=offset;
            cout<<ans<<"  ";
        }
        ans = finalans;
    }
    return finalans;

}
int main()
{
    double num = 15;
    double accuracy =15;

    // cout<<endl<<square(num)<< endl;
    // cout<<(16.81 < 16);
    cout<<endl<<advsquare(num , accuracy)<<endl;
    return 0;
}