#include<stdio.h>

int main(){
    int marks[3] = {1 , 252554 , 3};
    // &marks[0] = marks 
    // the address of marks' 0th element is stored in 'marks' , so it can be used to access the first element in the array

    int* p = marks;
    *p = 10; //this pointer increases the value at the 0th index of the array
    p++;     //here the value of pointer is increased , i.e now the pointer points towards the next element of the arry
    *p = 20; //this acutally changes the value at 2nd elemnt of the array   
    p++;
    *p = 30;
    
    printf("%d\n" , marks[0]);
    for (int i = 0; i<3 ; i++)
    {
        printf("%d " , marks[i]);
    }
    return 0;
}
 