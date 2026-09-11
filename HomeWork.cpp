#include <iostream>
using namespace std;

int main(){

//     Basic Grid Iteration: Write a program that uses nested loops to print a grid of numbers. The outer loop should iterate from 1 to 3 (representing rows), and the inner loop should iterate from 1 to 4 (representing columns). For each iteration, print the sum of the row and column indices. 

for (int row = 1; row <= 3; row++){
    for (int col = 1; col <= 3; col++){
            cout << "Row: " << row << ", Column: " << col << ", Sum: " << row + col << endl;
        
    }
}
cout << endl << endl << "Using While Loop" << endl << endl;


int row = 1;
while(row <=3){
    int col = 1;
    while(col <=4){
        cout << "Row: " << row << ", Column: " << col << ", Sum: " << row + col << endl;
        col++;
    }
    row++;
} 

cout << endl << endl << "Using Do While Loop" << endl << endl;

do{
    int row = 1;
    do{
        int col = 1;
        do{
            cout << "Row: " << row << ", Column: " << col << ", Sum: " << row + col << endl;
            col++;
        }while(col <=4);
        row++;
    }while(row <=3);
}

// Right-Angled Triangle Pattern: Create a program that takes an integer N as input and prints a right-angled triangle of asterisks. The outer loop should control the rows (from 1 to N), and the inner loop should print asterisks such that the number of asterisks in each row equals the current row number. 


for(int i = 1; i <= 5; i++){
    for(int j = 1; j <= i; j++){
        cout << "*";
    }
    cout << endl;
}


// Matrix Multiplication Logic: Explain how nested loops are used to calculate the product of two 2x2 matrices. Write a code snippet where the outer loop iterates through the rows of the first matrix, the middle loop iterates through the columns of the second matrix, and the innermost loop calculates the dot product for each element of the result matrix. 

for(int i = 0; i < 2; i++){
    for(int j = 0; j < 2; j++){
        int sum = 0;
        for(int k = 0; k < 2; k++){
            sum += matrix1[i][k] * matrix2[k][j];
        }
        result[i][j] = sum;
    }
}



// Break Statement Behavior: Given a nested loop structure where the outer loop runs 5 times and the inner loop runs 10 times, describe what happens if a break statement is placed inside the inner loop body. Specifically, does the outer loop terminate, or does it simply skip to the next iteration? 



for(int i = 0; i < 5; i++){
    for(int j = 0; j < 10; j++){
        if(j == 5){
            break; // This will exit the inner loop, but the outer loop will continue to the next iteration.
        }
        cout << "i: " << i << ", j: " << j << endl;
    }
}


// Sum of 2D Array Elements: Write a program that initializes a 3x3 integer array with specific values. Use nested loops to iterate through every element of the array and calculate the total sum of all elements, storing the result in a variable. 

for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        sum += array[i][j];
    }
}



//Check the Given Number is Prime Number or Not 





//Find The Given Number is Even or Odd



//Find the Factors of Given Number


//Check the Given Number is Armstrong Number or Not



//Fint the GCD or HCF of a Number




}