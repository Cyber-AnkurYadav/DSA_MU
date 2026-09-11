#include <iostream>
using namespace std;


void swapNumber(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;

}

int main(){
    int a=29;
    int b = 45;
    cout<< "Original A is "<< a << " And B is "<< b<<endl;
    swapNumber(a,b);
    cout<< "After Swap Variables using pointer A is: " << a << " And B is: " << b;

    return 0;
}