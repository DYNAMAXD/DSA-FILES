#include<iostream>

using namespace std;

int root(int x)
{
    int s = 0;
    int e = x;
    long long int mid = s + (e - s)/2;
    int ans;
    while(s <= e)
    {
        long long int p = mid*mid;
        if(p == x)
        {
            ans = mid;
        }

        if (p > x)
        {
            e = mid-1;
        }
        else
        {
            ans = mid;
            s = mid+1;
        }
        mid = s + (e - s)/2;
    }

    return ans;

}

int root1(int x)
{
    float r = root(x);
    // float move = 0.1;
    float s = r;
    float ans;
    double toadd;
    // cout<<s<<"  "<<r<<endl;
    do
    {   
        toadd = r;
        
        if(s * s <= x)
        {
            cout<<s<<"-->"<<s*s<<"-->>"<<x<<endl;
            ans = s;

        }
    }while(s*s < x);
    cout<<endl<<endl<<endl<<ans;
    return ans;

}
int main()
{
    // cout<<root(56)<<endl;
    cout<<root1(54)<<endl;
}