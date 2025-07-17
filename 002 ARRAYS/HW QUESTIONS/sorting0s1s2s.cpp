#include<iostream>
using namespace std;

void print(int arr[] , int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sort(int arr[] , int size)
{
    int z = 0 , o = 0 , t = 0;
    for (int  i = 0; i < size; i++)
    {
        if(arr[i] == 0){
            z++;
        }
        else if(arr[i] == 1){
            o++;
        }
        else{
            t++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        if(z){
            arr[i] = 0;
            z--;
        }
        else if(o){
            arr[i] = 1;
            o--;
        }
        else{
            arr[i] = 2;
            t--;
        }
    }
        
    
}



int main(){
    int size = 10;
    // int *arr = new int[size]; DMA
    int arr[10] = {1,2,2,1,0,2,2,0,0};
    print(arr , size);

    sort(arr,size);
    print(arr,size);
    return 0;
}