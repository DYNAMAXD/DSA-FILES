#include<iostream>
#include<vector>
using namespace std;


int searching(vector<int> v , int target)
{
    int ans = -1; 
    int s = 0;
    int e = v.size()-1;

    int mid = s + (e - s)/2;

    while(s <= e)
    {
        if (v[mid] == target)
        {
            return mid;
        }
        if (v[mid+1] == target)
        {
            return mid+1;
        }
        if (v[mid-1] == target)
        {
            return mid-1;
        }

        if(v[mid] < target)
        {
            //go to right
            s = mid+2;
        }
        else{
            e = mid-2;
        }
        mid = s + (e - s)/2;
    }
    return -1;
}

int main()
{
    vector<int> vec = {10 , 3 , 40 , 20 , 50 , 80 , 70};
    int target = 10;

    cout<<searching(vec , target)<<endl;
}