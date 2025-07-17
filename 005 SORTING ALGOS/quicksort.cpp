#include<iostream>
using namespace std;

void quicksort(int arr[] ,int s, int e)
{

}

int main()
{
    int arr[6] = {3 ,5 , 1 , 7 , 4 , 4};
    int size = 6; 

    quicksort(arr , 0 , size-1);

    for(int i : arr)
    {
        cout<<i<<"  ";   
    }
}