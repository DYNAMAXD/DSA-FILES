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
    int o = 0 , z = 0;
    for (int  i = 0; i < size; i++)
    {
        if(arr[i] == 0){
            z++;
        }
        else{
            o++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        if(z){
            arr[i] = 0;
            z--;
        }
        else{
            arr[i] = 1;
            o--;
        }
    }
        
    
}



int main(){
    int arr[5] = {1 ,0,1,1,0};
    print(arr , 5);

    sort(arr,5);
    print(arr,5);
    return 0;
}