#include<iostream>
#include<cmath>
using namespace std;

int countDigit(int n){
    int cnt=0;
    while(n>0){
        cnt++;
        n=n/10;
    }
    return cnt;
}

int addDigit(int n){
    while(n>=10){
        int sum=0;
        while(n>=10){
            int digit=n%10;
            sum += digit;
            n /=10;
        }
        sum += n;
    }
    return n;
    
}


int findFactors(int n){
    for(int i=2; i*i<=n; i++){
        while(n%i==0){
            cout << i << endl;
            n /= i;
        }
    }
    return 0;
}


int main(){
    int n=30;
    //cout<<addDigit(n);
    //cout<<addDigit(12543);
   // cout<<findFactors(n);
   for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0)
        {
            cout << i << " ";
            cout << n / i << " ";
        }
    }   

}