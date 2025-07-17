#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

// Recursive determinant function
//i wrote only this recursive function ,
//and the rest is ai generated 
//it generates 2 3x3 5x5 7x7 matrices , and feeds it to this function
//and gives answer
int detr(int **matrix, int n) {
    if (n == 1)
        return matrix[0][0];
    if (n == 2)
        return matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0];

    int ans = 0;
    for (int a = 0; a < n; a++) {
        int **helper = new int*[n - 1];
        for (int i = 1; i < n; i++) {
            int *row = new int[n - 1];
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (j != a)
                    row[count++] = matrix[i][j];
            }
            helper[i - 1] = row;
        }

        ans += pow(-1, a) * matrix[0][a] * detr(helper, n - 1);

        for (int i = 0; i < n - 1; i++)
            delete[] helper[i];
        delete[] helper;
    }

    return ans;
}

// Matrix utilities
void printMatrix(int **matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

void deleteMatrix(int **matrix, int n) {
    for (int i = 0; i < n; i++)
        delete[] matrix[i];
    delete[] matrix;
}

int** generateRandom(int n) {
    int **mat = new int*[n];
    for (int i = 0; i < n; i++) {
        mat[i] = new int[n];
        for (int j = 0; j < n; j++)
            mat[i][j] = rand() % 10; // random values 0–9
    }
    return mat;
}

int main() {
    srand(time(0));

    // Generate two 3x3 random matrices
    for (int i = 1; i <= 2; i++) {
        cout << "\n=== Random Matrix " << i << " (3x3) ===" << endl;
        int **mat3 = generateRandom(3);
        printMatrix(mat3, 3);
        cout << "Determinant: " << detr(mat3, 3) << endl;
        deleteMatrix(mat3, 3);
    }

    // Generate two 5x5 random matrices
    for (int i = 1; i <= 2; i++) {
        cout << "\n=== Random Matrix " << i << " (5x5) ===" << endl;
        int **mat5 = generateRandom(5);
        printMatrix(mat5, 5);
        cout << "Determinant: " << detr(mat5, 5) << endl;
        deleteMatrix(mat5, 5);
    }

    // ✅ Generate two 7x7 random matrices (updated as requested)
    for (int i = 1; i <= 2; i++) {
        cout << "\n=== Random Matrix " << i << " (7x7) ===" << endl;
        int **mat7 = generateRandom(7);
        printMatrix(mat7, 7);
        cout << "Determinant: " << detr(mat7, 7) << endl;
        deleteMatrix(mat7, 7);
    }

    return 0;
}
