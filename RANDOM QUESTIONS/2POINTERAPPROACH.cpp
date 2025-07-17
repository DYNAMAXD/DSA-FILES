#include<iostream>
#include<vector>
using namespace std;

void printarr(vector<int>& arr)
{
    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void fthing(vector<int> arr){
    int i = 0 ;
    int j = 1 ;

    while(j < arr.size()){
        if(arr[j] < 0)
        {
            swap(arr[i] ,arr[j]);
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    printarr(arr);

}

void fthing2(vector<int> arr){
    int i = 0;
    int j = arr.size()-1;

    while(j >=i)
    {
        if(arr[j] < 0)
        {
            swap(arr[i] , arr[j]);
            i++;
            j--;
        }
        else{
            j--;
        }
    }
    printarr(arr);
}
int main(){
    vector<int> arr = {1 , 2 , -5 , -3 , 8 , -4 , 5};
    printarr(arr);
    fthing(arr);
    fthing2(arr);
    return 0;
}