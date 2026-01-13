#include<bits/stdc++.h>
using namespace std;  

void merge(int arr[] , int n , int s , int mid , int e)
{
    int ans[e - s + 1];
    int pt = 0;

    int i = s;
    int j = mid+1;

    while(i <= mid && j <= e)
    {
        if(arr[i] < arr[j])
        {
            ans[pt] = arr[i++];
            pt++;
        }
        else
        {
            ans[pt] = arr[j++];
            pt++;
        }
    }
    
    while(i <= mid)
    {
        
        ans[pt] = arr[i];
        pt++;
        i++;
    }
    while(j <= e)
    {
        ans[pt] = arr[j];
        pt++;
        j++;
    }
    pt = 0;
    i = s;
    while(pt < e - s +1)
    {
        arr[i] = ans[pt];
        pt++;
        i++;
    }
}

void mergesort(int arr[] , int n , int s , int e)
{
    if(s >= e)return;

    // int mid =  e - (e - s)/2;
    int mid =  s + (e -s)/2;
    cout<<s<<"  "<<e<<endl;
    
    mergesort(arr , n , s , mid);
    mergesort(arr,  n , mid+1 , e);

    merge(arr , n , s , mid , e);

    return;
}

int main(){
    int arr[] = {49 , 56 , 29 ,45 , 38 , 47 , 15 , 72};
    mergesort(arr , 8 , 0 , 7);
    int count;
    for(int i = 0  ; i < 8 ; i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}