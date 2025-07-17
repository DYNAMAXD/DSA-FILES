#include<iostream>
using namespace std;

int main()
{
    int a[7] = {1,2,3,4,5,6,7};
    int b[10] = {-3 , -1 , 0 , 1,2,3,4,5,6,7};
    int c[9] = {1,2,3,4,5,6,7 , 8 , 9};


    int i = 0 ;
    int j = 0 ;
    int k = 0;

    while(i <7 && j <10 && k < 9)
    {
        cout<<i<<" "<<j<<" "<<k<<"---";
        cout<<a[i]<<" "<<b[j]<<" "<<c[k]<<" "<<endl;
        if(a[i] == b[j] && b[j] == c[k])
            {
                cout<<"found common"<<a[i]<<endl;
                i++;
                j++;
                k++;
            }
        else if(a[i] < b[j]) {i++;}
        else if(b[j] < c[k]) {j++;}
        else {k++;}
        
    }
    return 0;

}