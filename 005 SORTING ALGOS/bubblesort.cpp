#include<iostream>

using namespace std;

void swap(int &a , int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

void bubblesort(int arr[] , int size)
{
    for(int i = 0 ; i < size-1 ; i++)
    {
        if(arr[i] > arr[i+1])
        {
            swap(arr[i] , arr[i+1]);
            bubblesort(arr , size);
        }
    }

}

int main()
{
    int arr[] = {10 , 9 , 4 , 3 , 2 , 1};
    int size = 6;

    bubblesort(arr , size);
    for(int i = 0 ; i < size ; i++)
    {
        cout<<arr[i]<<" ";
    }
}