#include<iostream>
using namespace std;

void swap(int &a , int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}



    void print(int arr[] , int size)
    {for(int i = 0 ; i < size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    // cout<<endl;
    }
void selectionsort(int arr[], int size , int start)
{
    int min = start;
    for(int i = start ; i < size ;i++)
    {
        if(arr[i] < arr[min])
        {
            min = i;
        }
    }

    if(arr[start] > arr[min])
    {
        swap(arr[start] , arr[min]);
        selectionsort(arr , size , start+1);
    }
}

int main(){
    int arr[] = {10 , 9 , 5 , 4 , 3 , 2};
    int size = 6;
    selectionsort(arr , 6 , 0);

    for(int i = 0 ; i < size ; i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}