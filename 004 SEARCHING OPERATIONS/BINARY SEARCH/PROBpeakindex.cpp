#include<iostream>
#include<vector>

using namespace std;

//got the idea for this from the calculus class, 
//just like we used to calculate the local maxima
// just look for a place where the 
//left and right neighbour both are lower 
//and choose the side(left / right) of array by common sense
//solved it by own 
int peak(vector<int> & arr)
{
    int s = 0;
    int e = arr.size()-1;
    int mid= s +(e-s)/2;
    cout<< arr[mid-1] << " "<< arr[mid]<< " "<< arr[mid+1]<<endl;
    while(s < e)
    {
        mid = s + (e-s)/2;
        cout<<mid<<endl;

        if((arr[mid-1] < arr[mid])&(arr[mid] < arr[mid+1]))
        {
            cout<<"going right"<<endl;
            cout<< arr[mid-1] << " "<< arr[mid]<< " "<< arr[mid+1]<<endl;
            //go to right
            s = mid;
        }
        else if((arr[mid-1] > arr[mid])&(arr[mid] > arr[mid+1]))
        {
            cout<<"going left"<<endl;
            cout<< arr[mid-1] << " "<< arr[mid]<< " "<< arr[mid+1]<<endl;
            //go to left
            e = mid;
        }
        else if((arr[mid-1] < arr[mid])&(arr[mid] > arr[mid+1]))
        {
            cout<< arr[mid-1] << " "<< arr[mid]<< " "<< arr[mid+1]<<endl;
            cout<<"got it , got the index"<<mid<<endl;
            return mid;
        }
    }
    return -1;

}


//used same concept for local minima , just had to change 2 signs from maxima code  
int valey(vector<int>&arr)
{
    int s = 0;
    int e = arr.size()-1;
    int mid= s +(e-s)/2;
    cout<< arr[mid-1] << " "<< arr[mid]<< " "<< arr[mid+1]<<endl;
    while(s < e)
    {
        mid = s + (e-s)/2;
        cout<<mid<<endl;

        if((arr[mid-1] < arr[mid])&(arr[mid] < arr[mid+1]))
        {
            cout<<"going right"<<endl;
            cout<< arr[mid-1] << " "<< arr[mid]<< " "<< arr[mid+1]<<endl;
            //go to right
            s = mid;
        }
        else if((arr[mid-1] > arr[mid])&(arr[mid] > arr[mid+1]))
        {
            cout<<"going left"<<endl;
            cout<< arr[mid-1] << " "<< arr[mid]<< " "<< arr[mid+1]<<endl;
            //go to left
            e = mid;
        }
        else if((arr[mid-1] > arr[mid])&(arr[mid] < arr[mid+1]))
        {
            cout<< arr[mid-1] << " "<< arr[mid]<< " "<< arr[mid+1]<<endl;
            cout<<"got it , got the index "<<mid<<endl;
            cout<<endl<<endl<<endl;
            cout<<"answer is "<<arr[mid]<<endl;
            return mid;
        }
    }
    return -1;

}


int main()
{
    vector<int> arr = {0 , 1 , 2 , 3 , 15 , 200, 500 , 1000 , 14 , 12 , 2};
    vector<int> arr1 = {100 , 90 , 30 , 10 , 14 , 34 , 99};

    // cout<<peak(arr);
    cout<<valey(arr1);
}