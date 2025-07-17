#include<iostream>

using namespace std;

void ArraySearch(int* arr ,int s, int t , int i)
{
    if(i == s) return;

    if(arr[i] == t) 
    {
        cout<<"element found at index-->"<<i<<endl;
        return;
    }
    
    cout<<"element not  at index-->"<<i<<endl;
    cout<<"checking the index-->"<<i+1<<endl;
    ArraySearch(arr , s , t , i+1);
}

int main()
{
    int* arr = new int[10];
    for(int i = 0 ; i < 10 ; i++)
    {
        arr[i] = i+10;
    }

    for(int i = 0 ; i < 10 ; i++)
    {
        cout<<i[arr]<<endl;
    }
    cout<<2<<(2>>1);
    ArraySearch(arr , 10 , 15 , 0);
}