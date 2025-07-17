#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int** creatematrix(int n) {
    int** temp = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        temp[i] = (int*)calloc(n, sizeof(int));
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[i][j] = 999; // Infinity
        }
    }
    return temp;
}

void addedge(int** graph, int a, int b, int c) {
    graph[a - 1][b - 1] = c; // Convert to 0-based
    graph[b - 1][a - 1] = c;
}

int mstprim(int** graph, int v) {
    int visited[v];
    int near[v];
    int ans[2][v - 1]; // Exactly v-1 edges in MST

    for (int i = 0; i < v; i++) {
        near[i] = 999; // Initialize to "infinity"
    }

    // Find the smallest edge to start
    int t1 = INT_MAX, t2, t3;
    for (int i = 0; i < v; i++) {
        for (int j = 0; j < v; j++) {
            if (graph[i][j] < t1 && i != j) {
                t1 = graph[i][j];
                t2 = i;
                t3 = j;
            }
        }
    }

    ans[0][0] = t2; // First edge
    ans[1][0] = t3;
    near[t2] = near[t3] = 0; // Mark as visited

    // Initialize `near` for other vertices
    for (int i = 0; i < v; i++) {
        if (near[i] != 0) {
            if (graph[t2][i] < graph[t3][i]) {
                near[i] = t2;
            } else {
                near[i] = t3;
            }
        }
    }

    // Build the rest of the MST
    int t4;
    for (int i = 1; i < v - 1; i++) { // v-1 edges
        int min = 999;
        for (int m = 0; m < v; m++) {
            if (near[m] != 0 && graph[m][near[m]] < min) {
                min = graph[m][near[m]];
                t4 = m;
            }
        }

        ans[0][i] = t4;
        ans[1][i] = near[t4];
        near[t4] = 0; // Mark as visited

        // Update `near` for remaining vertices
        for (int m = 0; m < v; m++) {
            if (near[m] != 0 && graph[m][t4] < graph[m][near[m]]) {
                near[m] = t4;
            }
        }
    }

    // Print the MST edges
    printf("Edge \tWeight\n");
    for (int i = 0; i < v - 1; i++) {
        printf("%d - %d \t%d\n", ans[0][i] + 1, ans[1][i] + 1, graph[ans[0][i]][ans[1][i]]);
    }

    return 0;
}

int main() {
    int v = 8; // 8 vertices
    int** graph1 = creatematrix(v);
    addedge(graph1, 1, 2, 25);
    addedge(graph1, 2, 3, 12);
    addedge(graph1, 3, 4, 8);
    addedge(graph1, 4, 5, 16);
    addedge(graph1, 4, 7, 14);
    addedge(graph1, 2, 7, 10);
    addedge(graph1, 5, 6, 20);
    addedge(graph1, 1, 6, 5);
    addedge(graph1, 7, 3, 4);
    addedge(graph1, 5, 7, 18);

    mstprim(graph1, v);

    // Free memory
    for (int i = 0; i < v; i++) {
        free(graph1[i]);
    }
    free(graph1);
    return 0;
}
