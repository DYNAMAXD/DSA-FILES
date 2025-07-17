#include<iostream>
#include<vector>

using namespace std;

int oddelement(vector<int>& v)
{
    int ans = -1;

    int s = 0;
    int e = v.size()-1;

    int mid = s + (e - s)/2;

    while(s <= e)
    {
        mid = s + (e - s)/2;
        if(v[mid-1] == v[mid])
        {
            if(mid % 2 == 1)
            {
                //this means that mid is at the left side of the answer
                //go to right side

                s = mid + 1;
            }
            else
            {
                //and this side means that we are at the right side of answer
                //and thus go to the left side

                e = mid-1;
            }

        }

        else if(v[mid] == v[mid + 1])
        {
            if(mid % 2 == 0)
            {
                //this means that mid is at the left side of the answer
                //go to right side

                s = mid + 1;
            }
            else
            {
                //and this side means that we are at the right side of answer
                //and thus go to the left side

                e = mid-1;
            }
        }
        else
        {
            return mid;
        }
        
    }
    return -1;
}


    
int oddelement2(vector<int>& v)
{
    int ans = -1;
    int s = 0;
    int e = v.size()-1;

    int mid = s + (e - s)/2;

    while(s <= e)
    {
        mid = s + (e - s)/2;
        if((mid-1>0 )&& (v[mid-1] == v[mid]))
        {
            if(mid % 2 == 1)
            {
                //this means that mid is at the left side of the answer
                //go to right side

                s = mid + 1;
            }
            else
            {
                //and this side means that we are at the right side of answer
                //and thus go to the left side

                e = mid-1;
            }

        }

        else if((mid+1 < v.size() )&& (v[mid] == v[mid + 1]))
        {
            if(mid % 2 == 0)
            {
                //this means that mid is at the left side of the answer
                //go to right side

                s = mid + 1;
            }
            else
            {
                //and this side means that we are at the right side of answer
                //and thus go to the left side

                e = mid-1;
            }
        }
        else
        {
            return mid;
        }
        
    }
    return -1;
}

int main()
{
    vector<int> v = {1,1,2,3,3,4,4,8,8};

    cout<<"The odd occuring element index is : " << oddelement2(v)<<endl;
    cout<<"The odd occuring element is       : " << v[oddelement2(v)]<<endl;
}

//arreh , first try :D