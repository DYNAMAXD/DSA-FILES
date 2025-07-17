#include<iostream>

using namespace std;

void merge(int arr[] , int s , int mid, int e)
{
    int leftSize = mid - s + 1;
    int rightSize= e - mid;

    int *leftArr = new int[leftSize];
    int *rightArr = new int[rightSize];

    int l = 0;
    int r = 0;
    
    for(int i = s; i <= mid ; i++)
    {
        leftArr[l] = arr[i];
        l++;
    }
    
    for(int i = mid+1; i <= e ; i++)
    {
        rightArr[r] = arr[i];
        r++;
    }
    
    l = 0;
    r = 0;
    int index = s;

    while(l < leftSize && r < rightSize)
    {
        if(leftArr[l] < rightArr[r])
        {
            arr[index] = leftArr[l];
            index++;
            l++;
        }
        else
        {
            arr[index] = rightArr[r];
            index++;
            r++;
        }
    }

    while(l != leftSize)
    {
        arr[index] = leftArr[l];
        index++;
        l++;
    }
    while(r != rightSize)
    {
        arr[index] = rightArr[r];
        index++;
        r++;
    }
    
    delete[] leftArr;
    delete[] rightArr;
}

void mergeSort(int arr[] , int s , int e)
{
    if(s >= e)return;


    int mid = (s + e)/2;
    cout<<endl;
    // cout<<"Left arr --> ";
    // for(int i = s ; i <= mid ; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    mergeSort(arr ,  s , mid );
    
    // cout<<"right arr --> ";
    // for(int i = mid + 1  ; i <= e; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    mergeSort(arr ,  mid + 1 , e );

    merge(arr , s , mid , e);
}

int main()
{
    int arr[] =  { 23 , 53 , 98 , 85 , 12 , 45 , 78 , 199};
    int size = 8;
    int s = 0;
    int e = 7;
    cout<<"before the sorting"<<endl;
    for(auto i: arr)
    {
        cout<<i<<" ";
    }

    mergeSort(arr , s , e);

    cout<<endl<<"after the sorting"<<endl;
    for(auto i: arr)
    {
        cout<<i<<" ";
    }
}