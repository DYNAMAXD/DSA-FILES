//check if a array is sorted or not using recursion

#include<iostream>

using namespace std;

bool isSorted(int * arr , int size , int s)
{
    if(s == size-1)return true;
    // cout<<"checking this-->"<<arr[s]<<" and "<<arr[s+1]<<"--->";
    // cout<<(arr[s] < arr[s+1])<<endl;
    if(arr[s] < arr[s+1]) return isSorted(arr , size , s+1);
    return false;
}

int main()
{
    // int* arr = new int[10];

    int arr[] = {2 , 3 , 4 , 5 , 6, 7 , 8 , 10 , 12 , 20};
    int size = 10;

    if(isSorted(arr , size , 0))
    {
        cout<<"the array is sorted";
    }    
    else
    {
        cout<<"the array is not sorted";
    }

}