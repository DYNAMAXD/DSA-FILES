#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int hours(vector<int>& piles , int speed)
{
    int hours = 0;
    for(int a:piles)
    {
        hours+= ceil(a/speed)+1;
    }
    return hours;
    
}

int maxelement(vector<int>& piles)
{
int max = piles[0];

for(int a : piles)
{
    if (max < a)
    {
        max = a;
    }
}
return max;
}

int main() {
    vector<int> piles = {3,6,7,11};
    // the range shuold be from 1 to the max element of the array
    //0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11
    int h = 8;

    int ans = -1;
    int s = 0;
    int e = maxelement(piles);
    int mid = s + (e - s)/2;

    while(s <= e)
    {
        mid = s + (e - s)/2;
        cout<<s<<" "<<mid<<" "<<e<<"  "<<hours(piles , mid)<<"---->"<<h<<endl;
        if(hours(piles , mid) <= h)
        {
            ans = mid;
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }

    }
    cout<< ans;
}
