#include<iostream>
using namespace std;

int isPowerOfTwo(int n){
    return n>0 && (n&(n-1))==0;
}


int main(){
    int n;
    cout<<"Enter a number to check Power of Two: ";
    cin>>n;
    bool s = isPowerOfTwo(n);

    if(s){
        cout<<n<<" is power of two";
    }else{
        cout<<n<< " is not power of Two";
    }
    return 0;
}