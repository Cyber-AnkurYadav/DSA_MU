#include <iostream>
using namespace std;


void swap(int a, int b){

    a = &b;
    cout<<a;
    b = a;
    cout<<b;
    //return 0;

}

int main(){
    int a=10;
    int b = 20;

    swap(a, b);


    return 0;
}