#include<iostream>
using namespace std;

void print(int arr[] , int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapint(int &int1 , int & int2)
{
    int temp;
    int1 = int1^int2;
    int2 = int1 ^ int2;
    int1 = int1 ^ int2;
}

void reversearr(int arr[] ,int start , int end)
{
    int a = start , b = end;
    while(b >=a)
    {
        swapint(arr[a] , arr[b]);
        a++ ; 
        b--;
    }
}

void rotate(int arr[] , int size , int shift)
{
    int temp[shift];
    
    if(shift>size)
    {
        shift = shift%size;
    }
    if (shift == 0)
    {
    return;

    }
    for(int i = size - shift ; i <size ; i++)
    {
        temp[i - size + shift] = arr[i];
    }

    for(int i = size -1 ; i > shift-1 ; i--)
    {
        arr[i] = arr[i - shift];
    }

    for(int i = 0 ; i < shift ;i++)
    {
        arr[i] = temp[i];
    }
}

// void rotateultrapromax(int arr[] , int size , int shift)
// {

// } 

int main(){
    int arr[] = {-1,-100,3,99 , 55 , 47 , -95 , 25};
    int ans[] = {-95 , 25 ,-1,-100 ,3,99 , 55 , 47};
    int size = 8;
    int shift = 2;


    cout<<"original array"<<endl;
    print(arr , size);
    cout<<"answer array"<<endl;
    print(ans, size);
    
    cout<<endl<<endl<<endl;
    // rotate(arr , size , shift);
    // cout<<"after shift"<<endl;/
    // cout<<size <<"  " << shift;
    reversearr(arr ,  0, size-1);
    reversearr(arr ,  0, shift-1);
    reversearr(arr ,  shift , size-1);
    
    print(arr , size);
    return 0;
}