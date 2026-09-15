#include<iostream>
using namespace std;

int countPrimes(int n){
    if(n<2) return false;
    int prime=0;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;

}





int isPrime(int n){
    if(n<2) return false;

    for(int i=2; i*i<n; i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter a Number to Check that the given number is Prime or not: ";
    cin>>n;
    if(n<2){
        cout<<n<<" is nither Composite nor Prime";
    }
    else if(isPrime(n)){
        cout<<n<<" is Prime Number";
    }else{
        cout<<n<<" is a Composite Number";
    }
    return 0;
}