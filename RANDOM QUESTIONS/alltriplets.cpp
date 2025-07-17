#include<iostream>
using namespace std;

int main(){
    int arr[] = {1 , 3 , 5 , 7};
    int n = 4;
    int count = 27;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if((i!=j)&(j!=k)&(k!=i)){

                cout<<arr[i]<<" " << arr[j]<< " " <<arr[k]<<endl;
                }
            }
        }
    }
}