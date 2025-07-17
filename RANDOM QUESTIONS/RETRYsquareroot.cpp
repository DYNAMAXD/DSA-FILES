#include<iostream>

using namespace std;

float square(int num)
{
    int s = 0;
    int e = num;
    int mid = s + (e - s)/2;
    int prod = mid*mid;
    int ans;
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


float advsquare(int num , int acc)
{
    float ans = square(num);
    float finalans = ans ;
    float offset = 1;
    
    for(int i = 0 ; i < acc ; i++)
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
    int num = 15;
    int accuracy =5;

    // cout<<endl<<square(num)<< endl;
    // cout<<(16.81 < 16);
    cout<<endl<<advsquare(num , accuracy)<<endl;
    return 0;
}