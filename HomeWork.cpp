#include <iostream>
using namespace std;

int main() {
    // --- 1. Basic Grid Iteration (For Loop) ---
    cout << "=== For Loop ===" << endl;
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= 4; col++) { // Column limit 4 karna chahiye tha
            cout << "Row: " << row << ", Column: " << col << ", Sum: " << row + col << endl;
        }
    }

    cout << endl << endl << "=== While Loop ===" << endl << endl;
    // --- 2. While Loop ---
    int row = 1;
    while (row <= 3) {
        int col = 1;
        while (col <= 4) {
            cout << "Row: " << row << ", Column: " << col << ", Sum: " << row + col << endl;
            col++;
        }
        row++;
    }

    cout << endl << endl << "=== Do-While Loop ===" << endl << endl;
    // --- 3. Do-While Loop (Fixed Scope & Syntax) ---
    row = 1; // Initialize outside
    do {
        int col = 1; // Initialize inside or outside, but logic must be correct
        do {
            cout << "Row: " << row << ", Column: " << col << ", Sum: " << row + col << endl;
            col++;
        } while (col <= 4);
        row++;
    } while (row <= 3); // ✅ Condition yahan hai aur semicolon end mein

    cout << endl << endl << "=== Right-Angled Triangle ===" << endl;
    // --- 4. Triangle Pattern ---
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // --- 5. Matrix Multiplication (Variables Declare & Logic) ---
    cout << endl << "=== Matrix Multiplication ===" << endl;
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            int sum = 0; // ✅ Initialize sum
            for (int k = 0; k < 2; k++) {
                sum += matrix1[i][k] * matrix2[k][j];
            }
            result[i][j] = sum;
        }
    }

    // Print Result
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    // --- 6. Break Statement Example ---
    cout << endl << "=== Break Statement ===" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            if (j == 5) {
                break; // Inner loop break hoga, outer continue hoga
            }
            cout << "i: " << i << ", j: " << j << endl;
        }
    }

    // --- 7. Sum of 2D Array ---
    cout << endl << "=== Sum of 3x3 Array ===" << endl;
    int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0; // ✅ Initialize sum
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += array[i][j];
        }
    }
    cout << "Total Sum: " << sum << endl;

    // --- 8. Placeholder Comments (Uncomment to add code) ---
    // Check Prime, Even/Odd, Armstrong, GCD logic yahan add kar sakte hain.

    return 0;
}