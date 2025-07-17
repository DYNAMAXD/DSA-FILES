// Write a program to reverse the array

#include<stdio.h>

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    
    int copyarr[10];
    for (int i = 0 ; i < 10 ; i++)
    {
        copyarr[i] = arr[i];
    }
    for (int i = 0 ; i < 10 ; i++)
    {
     printf("%d" , arr[i]);
    }
    printf("\n");
    
    for (int i = 0 ; i < 10 ; i++)
    {
        arr[i] = copyarr[9 - i];
    }
    printf("the reversed array will be \n");
    for (int i = 0 ; i < 10 ; i++)
    {
     printf("%d" , arr[i]);
    }
    printf("\n");

    return 0;
}