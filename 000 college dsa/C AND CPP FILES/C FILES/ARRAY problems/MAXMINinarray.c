#include<stdio.h>

int main(){
    // int sizeofarr;
    // scanf("%d" , &sizeofarr);
    // for (int i = 0 ; i < sizeofarr ; i++)
    // {
    //   scanf("%d" , &arr[i]);
    // }
    int arr[10] = {1,2,3,4,5,6,7,8,90,10};
    int min = 0;
    int max = 0;
    for (int i = 0 ; i < 10 ; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        if (max < arr[i])
        {
            max = arr[i];
        }

    }
    printf("%d  %d" , min , max);
    return 0;
}