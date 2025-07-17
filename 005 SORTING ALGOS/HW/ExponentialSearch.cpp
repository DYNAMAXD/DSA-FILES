//used when an array is very very large , 
//we first find out the small range where we can find the 
//actual number instead of the whole array

#include<iostream>

using namespace std;

void bs(int arr[] , int a , int b , int c)
{
    int s = a;
    int e = b;
    int t = c;

    while(s < e)
    {
        int mid = s + (e-s)/2;
        cout<<s<<"  "<<e<<"  "<<arr[mid]<<endl;
        if(arr[mid] > t)
        {
            e = mid ;
        }
        else if(arr[mid] < t)
        {
            s = mid ;
        }
        if(arr[mid] == t)
        {
            cout<<"target found at "<<mid<<"-->"<<arr[mid]<<"   "<<t<<endl;
            return;
        }
    }
    cout<<"target not found in array"<<endl;
    return;

}


void ExpBS(int arr[] ,int a , int c)
{
    int n = a;
    int t = c;
    if(arr[0] == c)
    {
        cout<<"found at position 0"<<endl;
    }
    cout<<"z values"<<endl;
    int z = 1;
    while(z < n && arr[z] <= t)
    {
        cout<<z<<"-->"<<arr[z]<<endl;
        z*=2;
    }
    cout<<"now using more optimised binary search from range "<<z/2<<" to "<<z<<endl;
    return bs(arr , z/2 , z , t);
}


int main()
{
    int arr[100] = {1000, 2100, 3200, 4300, 5400, 6500, 7600, 8700, 9800, 10900, 12000, 13100, 14200, 15300, 16400, 17500, 18600, 19700, 20800, 21900,   23000, 24100, 25200, 26300, 27400, 28500, 29600, 30700, 31800, 32900,    34000, 35100, 36200, 37300, 38400, 39500, 40600, 41700, 42800, 43900,    45000, 46100, 47200, 48300, 49400, 50500, 51600, 52700, 53800, 54900,    56000, 57100, 58200, 59300, 60400, 61500, 62600, 63700, 64800, 65900,    67000, 68100, 69200, 70300, 71400, 72500, 73600, 74700, 75800, 76900,    78000, 79100, 80200, 81300, 82400, 83500, 84600, 85700, 86800, 87900,    89000, 90100, 91200, 92300, 93400, 94500, 95600, 96700, 97800, 98900,    100000, 101100, 102200, 103300, 104400, 105500, 106600, 107700, 108800, 109900};
    cout<<"this is the stock binary search"<<endl;
    int target = 76900;
    bs(arr , 0 , 100 , target);
    cout<<endl<<endl<<endl;
    cout<<"this is the overcharged binary search"<<endl;
    ExpBS(arr , 100 , target);
}




