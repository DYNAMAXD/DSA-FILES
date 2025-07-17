#include <stdio.h>

void processArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};

    int size = sizeof(myArray) / sizeof(myArray[0]);

    processArray(myArray, size);

    return 0;
}
