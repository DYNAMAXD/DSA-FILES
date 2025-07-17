#include<stdio.h>

void clean(int *arrays , int a); //so for arrays to be taken as input , we must have a * in the inputs of function

int main(){
    int arr[] = {1,2,3,4,5,6};
    clean(arr , 4);
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
       printf("%d", arr[i]);
    }

}

//so for arrays to be taken as input , we must have a * in the inputs of function
void clean(int *arrays , int a)
{
    for (int i = 0; i < sizeof(arrays)/sizeof(arrays[0]); i++)
    {
       printf("%d" , arrays[i]);
    }
    
}