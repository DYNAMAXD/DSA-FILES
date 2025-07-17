#include<iostream>
using namespace std;

int main(){
    // int a = 5;
    // int b = 5;
    // int c = &a;s
    // int *c = &a;
    // cout<<&a<< "-->"<<&b<<endl;
    // cout<<sizeof(c);


    // int *ptr1;    //<---- this is bad practice , should not do it 
    // int *ptr2;    //<---- this might point to address outside of the program and may cause segmentation fault  
    // cout<<ptr2<<endl;

    // int arr[] = {10 , 20,  30 , 40};
    // cout<<arr<<endl;
    // int*ptr = arr;
    // cout<<*(ptr+2);
    // cout<<*(arr+2);

    // arr = arr+1; <--- this arr address is not modifiable

    char ch = 'a';
    cout<<ch<<endl;
    char* cptr = &ch;
    cout<<cptr;
    return 0;
}