#include <iostream>
#include <climits>
using namespace std;

int main() {
    cout << "========== C++ DATA TYPES ==========" << endl << endl;

    // ===== 1. INTEGER DATA TYPES =====
    cout << "1. INTEGER DATA TYPES:" << endl;
    cout << "------------------------" << endl;
    
    // int
    int age = 25;
    cout << "int: " << age << " (Range: " << INT_MIN << " to " << INT_MAX << ")" << endl;
    cout << "Size: " << sizeof(int) << " bytes" << endl;
    
    // short int
    short int shortNum = 100;
    cout << "\nshort int: " << shortNum << " (Range: " << SHRT_MIN << " to " << SHRT_MAX << ")" << endl;
    cout << "Size: " << sizeof(short int) << " bytes" << endl;
    
    // long int
    long int longNum = 1000000L;
    cout << "\nlong int: " << longNum << " (Range: " << LONG_MIN << " to " << LONG_MAX << ")" << endl;
    cout << "Size: " << sizeof(long int) << " bytes" << endl;
    
    // long long int
    long long int veryLongNum = 9223372036854775807LL;
    cout << "\nlong long int: " << veryLongNum << endl;
    cout << "Size: " << sizeof(long long int) << " bytes" << endl;
    
    // unsigned int
    unsigned int posNum = 50;
    cout << "\nunsigned int: " << posNum << " (Range: 0 to " << UINT_MAX << ")" << endl;
    cout << "Size: " << sizeof(unsigned int) << " bytes" << endl;

    cout << "\n===== 2. FLOATING-POINT DATA TYPES =====" << endl;
    cout << "----------------------------------------" << endl;
    
    // float
    float pi = 3.14159f;
    cout << "float: " << pi << " (Single precision)" << endl;
    cout << "Size: " << sizeof(float) << " bytes" << endl;
    
    // double
    double piDouble = 3.141592653589793;
    cout << "\ndouble: " << piDouble << " (Double precision)" << endl;
    cout << "Size: " << sizeof(double) << " bytes" << endl;
    
    // long double
    long double piLongDouble = 3.14159265358979323846L;
    cout << "\nlong double: " << piLongDouble << " (Extended precision)" << endl;
    cout << "Size: " << sizeof(long double) << " bytes" << endl;

    cout << "\n===== 3. CHARACTER DATA TYPES =====" << endl;
    cout << "-----------------------------------" << endl;
    
    // char
    char grade = 'A';
    cout << "char: " << grade << endl;
    cout << "Size: " << sizeof(char) << " byte" << endl;
    cout << "ASCII Value: " << (int)grade << endl;
    
    // unsigned char
    unsigned char uChar = 255;
    cout << "\nunsigned char: " << uChar << " (Range: 0 to 255)" << endl;
    cout << "Size: " << sizeof(unsigned char) << " byte" << endl;

    cout << "\n===== 4. BOOLEAN DATA TYPE =====" << endl;
    cout << "--------------------------------" << endl;
    
    // bool
    bool isTrue = true;
    bool isFalse = false;
    cout << "bool true: " << isTrue << endl;
    cout << "bool false: " << isFalse << endl;
    cout << "Size: " << sizeof(bool) << " byte" << endl;

    cout << "\n===== 5. VOID DATA TYPE =====" << endl;
    cout << "-----------------------------" << endl;
    cout << "void: Used as a return type for functions or generic pointers" << endl;
    cout << "Size: " << sizeof(void*) << " bytes (void pointer)" << endl;

    cout << "\n===== 6. TYPE MODIFIERS =====" << endl;
    cout << "------------------------------" << endl;
    cout << "Modifiers: signed, unsigned, short, long" << endl;
    
    signed int signedNum = -100;
    cout << "signed int: " << signedNum << endl;
    
    unsigned long ulongNum = 999999999UL;
    cout << "unsigned long: " << ulongNum << endl;

    cout << "\n===== 7. DERIVED DATA TYPES =====" << endl;
    cout << "---------------------------------" << endl;
    
    // Array
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "Array - int arr[5]: ";
    for(int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl;
    
    // Pointer
    int* ptr = &age;
    cout << "Pointer - int* ptr: Address = " << ptr << ", Value = " << *ptr << endl;
    
    // String (array of chars)
    char str[] = "Hello";
    cout << "String - char str[]: " << str << endl;

    cout << "\n===== 8. USER-DEFINED DATA TYPES =====" << endl;
    cout << "---------------------------------------" << endl;
    
    // Structure
    struct Student {
        int rollNo;
        char grade;
        float gpa;
    };
    
    Student s1 = {101, 'A', 3.8f};
    cout << "Structure - Student:" << endl;
    cout << "  Roll No: " << s1.rollNo << ", Grade: " << s1.grade << ", GPA: " << s1.gpa << endl;
    
    // Enumeration
    enum Color {RED = 0, GREEN = 1, BLUE = 2};
    Color myColor = GREEN;
    cout << "\nEnumeration - Color: " << myColor << " (GREEN)" << endl;

    cout << "\n===== 9. SIZE SUMMARY =====" << endl;
    cout << "----------------------------" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;
    cout << "char: " << sizeof(char) << " byte" << endl;
    cout << "bool: " << sizeof(bool) << " byte" << endl;
    cout << "long long: " << sizeof(long long) << " bytes" << endl;

    return 0;
}
