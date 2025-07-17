#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 3, nr = 3; // Number of processes and resources

    // Hardcoded Allocation Matrix
    int arr[3][3] = {
        {1, 2, 3},
        {2, 3, 4},
        {3, 4, 5}
    };

    // Hardcoded Maximum Matrix
    int max[3][3] = {
        {9, 8, 7},
        {8, 7, 6},
        {7, 6, 5}
    };

    // Hardcoded Available Resources
    int avail[3] = {4, 5, 6};

    int need[3][3], done[3] = {0}, order[3], a = 0;

    // Calculate the Need Matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < nr; j++) {
            need[i][j] = max[i][j] - arr[i][j];
        }
    }

    // Debug: Print the Need Matrix
    printf("Need Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < nr; j++) {
            printf("%d ", need[i][j]);
        }
        printf("\n");
    }

    // Banker's Algorithm Logic
    while (1) {
        int flag = 0;

        for (int i = 0; i < n; i++) {
            int good = 1;
            if (!done[i]) { // Check only incomplete processes
                for (int j = 0; j < nr; j++) {
                    if (avail[j] < need[i][j]) { // Check resource availability
                        good = 0;
                        break;
                    }
                }
            }

            if (good) { // If the process can safely execute
                for (int j = 0; j < nr; j++) {
                    avail[j] += arr[i][j]; // Release allocated resources
                }
                done[i] = 1; // Mark the process as completed
                order[a] = i; // Record in the safe sequence
                a++;
                flag = 1; // Indicate progress
            }
        }

        if (!flag) { // Exit the loop when no progress is made
            break;
        }
    }

    // Print the Safe Sequence
    printf("Safe Sequence: ");
    for (int i = 0; i < a; i++) {
        printf("P%d ", order[i]);
    }
    printf("\n");

    return 0;
}
