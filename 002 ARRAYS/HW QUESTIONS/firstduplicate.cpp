#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{
    vector<int> arr = {1,  5 , 3 , 4 , 3 , 5 , 6};
    //1. Brute force method
    for(int i = 0 ; i < arr.size() ; i++){
        for(int j = i+1 ; j < arr.size() ; j++){
            if(arr[i] == arr[j])
            {
                cout<<arr[i]<<endl;
            }
        }
    }
    //tc = O(n^2)

    //2.Using Hashing
    unordered_map<int , int> mapp;
    for(int i = 0 ; i < arr.size() ; i++)
    {
        if(mapp.find(arr[i])== mapp.end()){
            mapp[arr[i]] = 1;
        }
        else
        {
            mapp[arr[i]]+=1;
        }
    }
    for(int i = 0 ; i < arr.size() ; i++){
        if(mapp[arr[i]] > 1){
            cout<<arr[i]<<endl;
            break;
        }
    }
    return 0;
}