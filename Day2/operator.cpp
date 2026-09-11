#include <iostream>
using namespace std;

int main(){
    
    int a, b;
    cout<<"Enter Value of A: " << endl;
    cin>>a;
    cout<<"Enter Calue of B: " << endl;
    cin>>b;
    // int ch;
    // cout<<"Enter your choice: (1-5)" << endl;
    // cin>>ch;
    // switch(ch){
    //     case 1:
    //         cout<< a+b << endl;
    //         break;
    //     case 2:
    //         cout << a - b << endl;
    //         break;
    //     case 3:
    //         cout  << a*b << endl;
    //         break;
    //     case 4:
    //         cout<< a/b << endl;
    //         break;
    //     case 5:
    //         cout << a%b << endl;
    //         break;
    //     default:
    //         cout<< "Envalid Choice" << endl;
    //         break;
    // }




    int num;
    cout<<"1. Addition" << endl;
    cout<<"2. Subtraction" << endl;
    cout<<"3. Multiplication" << endl;
    cout<<"4. Division" << endl;
    cout<<"5. Modulus" << endl;
    cout<<"Enter a number(1-5): " << endl;
    cin>>num;
    
    switch(num){
        case 1:
            cout<< a+b << endl;
            break;
        case 2:
            cout << a - b << endl;
            break;
        case 3:
            cout  << a*b << endl;
            break;
        case 4:
            cout<< a/b << endl;
            break;
        case 5:
            cout << a%b << endl;
            break;
        default:
            cout<<"You HAve Entered a Wrong Choice" << endl;
            break; 

    }
    return 0;
}