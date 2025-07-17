#include<iostream>
using namespace std;

int divideit(int divident , int divisor)
{
    int ans = -1;

    int s = divident*-1;
    int e = divident;

    int mid = s + ((e -s)>>1);

    while(s <= e)
    {
        if(divisor * mid <= divident)
        {
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        
        mid = s + ((e -s)>>1);
    }
    if (divident*divisor < 0)
		{
			return ((ans*-1)-1);
		}
        if(divisor*divident == 0)
        {
            return 0;
        }
		else
		{
			return ans;
		}

    return ans;
}

int divideit2(int dend , int dior)
{
    int ans = 0;
    while(dend > dior)
    {
        dend -= dior;
        ans++;
    }
    return ans;
    return dior;
}

int main(){
    

    // cout<<divideit(17 , 4)<<endl;
    cout<<divideit(1 , 1);
    return 0;
}