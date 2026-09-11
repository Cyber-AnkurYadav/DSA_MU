#include <iostream>
#include <string>
using namespace std;

// Variable = a named memory location used to store data.
// Every variable has:
// 1. Name
// 2. Data type
// 3. Value (initialization)
// 4. Memory size depending on type

int globalVar = 100; // global variable: accessible throughout the program

int main() {
    // 1. Variable declaration and initialization
    int age = 21;              // integer type
    float height = 5.8f;       // single precision decimal
    double salary = 45000.75;  // double precision decimal
    char grade = 'A';          // single character
    bool isPassed = true;      // true/false
    string name = "Aman";     // sequence of characters

    // 2. Declaration without initialization
    int marks;
    float temperature;
    double pi;
    char initial;
    bool flag;
    string city;

    // Assigning values later
    marks = 95;
    temperature = 36.6f;
    pi = 3.1415926535;
    initial = 'K';
    flag = false;
    city = "Delhi";

    // 3. Different integer types
    short shortValue = 123;              // small integer, usually 2 bytes
    int intValue = 12345;                // normal integer, usually 4 bytes
    long longValue = 1234567890L;        // larger integer, usually 4 or 8 bytes
    long long longLongValue = 9876543210123LL; // very large integer

    unsigned int positiveAge = 30;       // non-negative integer only
    unsigned long bigPositiveNumber = 5000000UL;

    // 4. Different floating-point types
    float price = 499.99f;               // 32-bit floating value
    double balance = 987654.321;         // 64-bit floating value
    long double hugeValue = 123456789.123456789L; // extended precision

    // 5. Character and string type
    char ch = 'Z';
    string message = "Welcome to C++";

    // 6. Boolean type
    bool isAdult = age >= 18;

    // 7. Constant variables (cannot be changed)
    const int MAX_MARKS = 100;
    const float PI = 3.14f;

    // 8. Printing variables
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " ft" << endl;
    cout << "Salary: " << salary << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << boolalpha << isPassed << endl;
    cout << "Marks: " << marks << endl;
    cout << "Short: " << shortValue << endl;
    cout << "Int: " << intValue << endl;
    cout << "Long: " << longValue << endl;
    cout << "Long Long: " << longLongValue << endl;
    cout << "Positive Age: " << positiveAge << endl;
    cout << "Price: " << price << endl;
    cout << "Balance: " << balance << endl;
    cout << "Character: " << ch << endl;
    cout << "City: " << city << endl;
    cout << "Adult: " << boolalpha << isAdult << endl;
    cout << "Global Variable: " << globalVar << endl;
    cout << "Maximum Marks: " << MAX_MARKS << endl;

    // Explanation of variable types in C++:
    // int: stores whole numbers (e.g., 5, -10, 2000)
    // float: stores decimal numbers with single precision (approx. 7 digits)
    // double: stores decimal numbers with double precision (approx. 15 digits)
    // char: stores a single character like 'A' or '7'
    // bool: stores true or false
    // string: stores text like "Hello"
    // short: smaller integer type, uses less memory than int
    // long: larger integer type, can store bigger values than int
    // long long: even larger integer type
    // unsigned: stores only positive values (0 and above), useful for large non-negative numbers
    // const: creates a constant variable whose value cannot be changed later

    return 0;
}
