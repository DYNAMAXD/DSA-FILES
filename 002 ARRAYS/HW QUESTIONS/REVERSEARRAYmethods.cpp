#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(int arr[] , int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void bachpanwalatarika(int arr[] , int size)
{
    for (int i = size-1; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void recursivereverse(int arr[] , int size)
{
    for (int i = 0; i < size/2; i++)
    {
        int j = i , k = size - i-1;
        arr[j] = (arr[j] * arr[k]) / (arr[k] = arr[j]);
    }
    print(arr , size);
    cout<<endl;
}

void usingreversefunction(int arr[] , int size)
{
    reverse(arr , arr + size);
    print(arr , size);
}


int main(){
    int arr[] = {12,45,78,89,56,23,15,59,57,35,58};
    int size = 11;
    bachpanwalatarika(arr , size);
    // recursivereverse(arr , size);
    // usingreversefunction(arr , size);
    return 0;
}