#include<iostream>
using namespace std;


int mySqrt(int x){
    long long r=abs(x);
    int n = abs(x);

    while(r*r>n){
        r=(r+n/r)/2;
    }
    return r;
}

int main(){
    int n;
    cout<<"Enter a number to check square root of a Number: ";
    cin>>n;
    cout<<mySqrt(n);
    return 0;
}