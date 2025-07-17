#include <stdio.h>
int main() {
    int arr[10], i, j, count;
    
    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Integers that appear more than once:\n");
    for(i = 0; i < 10; i++) {
        count = 1;
        if(arr[i] == -1) continue;
        for(j = i + 1; j < 10; j++) {
            if(arr[i] == arr[j]) {
                count++;
                arr[j] = -1; 
            }   
        }
        if(count > 1) {
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}
