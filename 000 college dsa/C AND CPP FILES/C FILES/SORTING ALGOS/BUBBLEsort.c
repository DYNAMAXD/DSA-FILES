#include<stdio.h>
size = 0;
void bubblesort(int *array)
{
    for (int i = 0 ; i < size - 1 ; i++)
    {
        if (array[i+1] < array[i])
        {
            int random = array[i];
            array[i] = array[i+1];
            array[i+1] = random;
            bubblesort(array);
        }
    }
}

int main(){

    int array[] = {23,3,4,1,45,67,78};
    size = sizeof(array)/ sizeof(array[0]);
    printf("%d" , size);
    bubblesort(array);
    printf("%d" , array[1]);
    
    return 0;
}