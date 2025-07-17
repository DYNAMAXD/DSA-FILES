#include<iostream>
using namespace std;


void print(int arr[] , int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void onecomplement(int arr[] , int size)
{
    for (int  i = 0; i < size; i++)
    {
        if(arr[i] ==1)
        {
            arr[i] = 0;
        }
        else{
            arr[i] = 1;
        }
    }
    
}

void adding1(int arr[] , int size){ 
    int arr2[size+1] = {0};
    int arr1[size+1] = {0};
    arr1[size] =1;
    int c = 0;
    for(int i = size ; i >=0 ; i--)
    {
        arr2[i] = (arr[i-1]^arr1[i]^c);
        c = ((arr[i-1]&c)|(arr1[i]&c)|(arr[i-1]&arr1[i]));\
    }
    arr2[0] = c;
    
    //this arr2 is the 2's compliment
    //the main problem was that i had to calculate and assign
    //the values for arr , which created problems while calculating 
    //as the previous data is also used in the calculation 
    //so i used a temporary variable instead , and it works like charm
    //overall nice question :D
    //thankyou love bhaiiya

    
    cout<<"2s complement of the array will be"<< endl;
    print(arr2 , size+1);

    for(int i = 0; i < size ; i++){
        arr[i] = arr2[i];
    }

}

void twoscomplement(int arr[] ,int size){
    cout<<"1s complement of the array will be"<< endl;
    onecomplement(arr , size);
    print(arr , size);

    adding1(arr , size);
    }


int main(){
    int size = 9;   
    int arr1[size] = {1,1,1,0,1,0,1,1,0};
    
    print(arr1 , size);
    twoscomplement(arr1 , size);
    return 0;
}

//tricky case
//look out for the array 0000 
//whose 2s complement is 10000