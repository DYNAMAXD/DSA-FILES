#include<iostream>

using namespace std;

void RBS(int* arr , int s , int e , int t)
{
    int mid = s + ((e-s)>>1);
    if(s > e)
    {
        cout<<"target not found ";
        cout<< -1<<endl;
        return;
    }


    if(arr[mid] == t)
    {
        cout<<"element found at "<<mid<<endl;
        return;
    }
    if(arr[mid] > t)
    {
        RBS(arr , s , mid-1 , t);
    }
    if(arr[mid] < t)
    {
        RBS(arr , mid +1, e , t);
    }
}

int main()
{
    int* arr = new int[10];
    for(int i = 0 ; i < 10 ; i++)
    {
        arr[i] = 100*i;
    }
    

    int target = 400;
    RBS(arr , 0 , 10 , target);
    RBS(arr , 0 , 10 , target+1000);
}