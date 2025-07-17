#include<iostream>
using namespace std;

void firstoccurance(int arr[] , int n , int target , int &ans)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e - s)/2;

    while(s <= e)
    {   
        if (arr[mid] == target)
        {
            ans = mid;
            //if there is some other first occurance then
            //it would be on the left side only 
            //we need to go to the left side
            e = mid-1;
        }
        if(target > arr[mid])
        {
            //go to right
            s = mid+1;
        }
        
        if(target < arr[mid])
        {
            e=mid-1;
        }
        //ye mai bhul jata hu
        mid = s+(e-s)/2;
    }
}

void lastoccurance(int arr[] , int n , int target , int &ans)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e - s)/2;

    while(s <= e)
    {   
        if (arr[mid] == target)
        {
            ans = mid;
            //if there is some other first occurance then
            //it would be on the left side only 
            //we need to go to the left side
            s = mid+1;
        }
        if(target > arr[mid])
        {
            //go to right
            s = mid+1;
        }

        if(target < arr[mid])
        {
            e=mid-1;
        }
        //ye mai bhul jata hu
        mid = s+(e-s)/2;
    }
}

 int firstbinsearch(int arr[], int target , int size)
    {
        int ans;
        int s = 0;
        int e = size-1;
        int mid = s + (e - s)/2;

        while(s <= e)
        {
            if(arr[mid] == target)
            {
                ans = mid;
                // e = mid -1;
                s = mid+1;
            }
            
            else if(arr[mid] < target)
            {
                // go to the right side
                s = mid+1;
            }

            else{
                //go to the left side
                e = mid-1;
            }
            //yeh mai karna bhul jata hu
            mid = s + (e-s)/2;
        }
        return ans;
    }

int main(){
    int arr[]= { 11, 20 , 20 , 20 , 20  , 20 , 20 , 30 , 40 , 50 , 60};
    int arr2[] = {5,7,7,8,8,10};
    int target2 = 8;
    int n = 10;
    int target = 20;
    // cout<<"wht the f";
    //-1 means target not found
    int index = -1;

    // firstoccurance(arr ,n , target , index);
    // cout<<index<<endl;
    // lastoccurance(arr ,n , target , index);
    // cout<<index<<endl;  
    index = firstbinsearch(arr2 ,target2 , 6);
    cout<<index<<endl;  
    return 0;
}