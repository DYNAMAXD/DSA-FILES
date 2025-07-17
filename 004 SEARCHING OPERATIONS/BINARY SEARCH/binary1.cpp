#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool binaryoperation(vector<int> &arr , int target){
    int s = 0;
    int e = arr.size();
    int mid;
    while(s <= e)
    {
        mid = s + (e - s)/2;

        if(arr[mid] == target)
        {
            return true;
        }

        if(arr[mid] > target)
        {
            //go to the right 
            s += mid + 1;
        }

        if(arr[mid] < target)
        {
            //go to the left 
            e -= mid -1;
        }
    }
}

int main(){
    vector<int> arr = {10 , 20 , 30 , 40 , 50 , 60 , 70 , 80 , 90};
    int target = 40;

    // bool ans = binaryoperation(arr , target);

    bool ans = binary_search(arr.begin() , arr.end() , 60);
    if (ans){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}