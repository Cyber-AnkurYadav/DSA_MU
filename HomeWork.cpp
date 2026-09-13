#include <iostream>
#include <vector>
using namespace std;

// --- 1. Function: Grid Iteration (For Loop) ---
void gridIterationFor() {
    cout << "=== For Loop ===" << endl;
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= 4; col++) {
            cout << "Row: " << row << ", Column: " << col << ", Sum: " << row + col << endl;
        }
    }
}

// --- 2. Function: Grid Iteration (While Loop) ---
void gridIterationWhile() {
    cout << "\n=== While Loop ===" << endl;
    int row = 1;
    while (row <= 3) {
        int col = 1;
        while (col <= 4) {
            cout << "Row: " << row << ", Column: " << col << ", Sum: " << row + col << endl;
            col++;
        }
        row++;
    }
}

// --- 3. Function: Grid Iteration (Do-While Loop) ---
void gridIterationDoWhile() {
    cout << "\n=== Do-While Loop ===" << endl;
    int row = 1;
    do {
        int col = 1;
        do {
            cout << "Row: " << row << ", Column: " << col << ", Sum: " << row + col << endl;
            col++;
        } while (col <= 4);
        row++;
    } while (row <= 3);
}

// --- 4. Function: Right-Angled Triangle ---
void printTriangle(int n) {
    cout << "\n=== Right-Angled Triangle (Size: " << n << ") ===" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// --- 5. Function: Matrix Multiplication ---
void matrixMultiplication(int mat1[2][2], int mat2[2][2], int res[2][2]) {
    cout << "\n=== Matrix Multiplication ===" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            int sum = 0;
            for (int k = 0; k < 2; k++) {
                sum += mat1[i][k] * mat2[k][j];
            }
            res[i][j] = sum;
        }
    }

    // Print Result
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

// --- 6. Function: Break Statement Demo ---
void breakDemo() {
    cout << "\n=== Break Statement Demo ===" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            if (j == 5) {
                break; // Exit inner loop
            }
            cout << "i: " << i << ", j: " << j << endl;
        }
    }
}

// --- 7. Function: Sum of 2D Array ---
int sumOf2DArray(int arr[3][3]) {
    int totalSum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            totalSum += arr[i][j];
        }
    }
    return totalSum;
}

int main() {
    // 1. Call Grid Iteration Functions
    gridIterationFor();
    gridIterationWhile();
    gridIterationDoWhile();

    // 2. Call Triangle Function (Pass size 5)
    printTriangle(5);

    // 3. Call Matrix Multiplication
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];
    matrixMultiplication(matrix1, matrix2, result);

    // 4. Call Break Demo
    breakDemo();

    // 5. Call Sum Function
    int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int total = sumOf2DArray(array);
    cout << "\n=== Sum of 3x3 Array ===" << endl;
    cout << "Total Sum: " << total << endl;

    return 0;
}