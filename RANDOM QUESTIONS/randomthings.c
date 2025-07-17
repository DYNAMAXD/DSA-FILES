#include<stdio.h>

void swap(int &a , int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

}

int main()
{
    int a = 6;
    int arr[] = {1 , 2 , 3 , 2 , 3, 3};


}