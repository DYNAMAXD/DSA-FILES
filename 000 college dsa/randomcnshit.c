#include <stdio.h>
#include <stdbool.h>

void find_safe_sequence(int no_of_resources, int process, int availability[], int allocated[][5], int MAX[][5]) {
    int k = 0, P[10], op[10], need[10][5], i, j, cnt;
    for (i = 0; i < process; i++) P[i] = i;
    
    while (process > 0) {
        int a = -1;
        for (i = 0; i < process; i++) {
            cnt = 0;
            for (j = 0; j < no_of_resources; j++) {
                need[P[i]][j] = MAX[P[i]][j] - allocated[P[i]][j];
                if (need[P[i]][j] <= availability[j])
                    cnt++;
            }
            if (cnt == no_of_resources) {
                op[k++] = P[i];
                for (j = 0; j < no_of_resources; j++)
                    availability[j] += allocated[P[i]][j];
            } else {
                P[++a] = P[i];
            }
        }
        if (a == -1) break;
        if (a + 1 == process) {
            printf("No Safe Sequence Exists.\n");
            return;
        }
        process = a + 1;
    }
    printf("Safe Sequence: <");
    for (i = 0; i < k; i++)
        printf(" P[%d] ", op[i]);
    printf(">\n");
}

bool request_resources(int process_id, int request[], int no_of_resources, int availability[], int allocated[][5], int MAX[][5]) {
    for (int i = 0; i < no_of_resources; i++) {
        if (request[i] > (MAX[process_id][i] - allocated[process_id][i]) || request[i] > availability[i])
            return false;
    }
    for (int i = 0; i < no_of_resources; i++) {
        availability[i] -= request[i];
        allocated[process_id][i] += request[i];
    }
    return true;
}

void main() {
    int no_of_resources, process, availability[5], allocated[10][5], MAX[10][5], instance[5], request[5], process_id;
    printf("Enter the number of resources: ");
    scanf("%d", &no_of_resources);
    printf("Enter max instances of each resource:\n");
    for (int i = 0; i < no_of_resources; i++) {
        printf("%c = ", (i + 97));
        scanf("%d", &instance[i]);
        availability[i] = instance[i];
    }
    printf("Enter the number of processes: ");
    scanf("%d", &process);
    printf("Enter allocation matrix:\n");
    for (int i = 0; i < process; i++)
        for (int j = 0; j < no_of_resources; j++) {
            scanf("%d", &allocated[i][j]);
            availability[j] -= allocated[i][j];
        }
    printf("Enter MAX matrix:\n");
    for (int i = 0; i < process; i++)
        for (int j = 0; j < no_of_resources; j++)
            scanf("%d", &MAX[i][j]);
    
    find_safe_sequence(no_of_resources, process, availability, allocated, MAX);
    
    printf("Enter process ID for resource request: ");
    scanf("%d", &process_id);
    printf("\n");
    for (int i = 0; i < no_of_resources; i++)
        scanf("%d", &request[i]);
    
    if (request_resources(process_id, request, no_of_resources, availability, allocated, MAX)) {
        printf("new safe sequence:\n");
        find_safe_sequence(no_of_resources, process, availability, allocated, MAX);
    } else {
        printf("deadlock.\n");
    }
}
