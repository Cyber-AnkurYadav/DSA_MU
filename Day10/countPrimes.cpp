#include<iostream>
#include<vector>
using namespace std;

int countPrimes(int n) {
        if (n <= 2) return 0;
        vector<char> isPrime(n, 1);
        isPrime[0]=0;
        isPrime[1]=0;
        for(int i=2; i<n; i+=2){
            isPrime[i]=0;
        }
        for(int i=3; i*i<n; i++){
            if(isPrime[i]){
                for(int j=i*i; j<n; j+=i*2){
                    isPrime[j] = 0;
                }
            }
        }

        int cnt=1;
        for(int i=3; i<n; i++){
            
            if(isPrime[i]){
                cnt++;
            }
        }
        return cnt;
    }



    int main(){
        int n;
        cout<<"Enter a number to check prime numbers that are strictly less than n: ";
        cin>>n;
        cout<<countPrimes(n);
        return 0;
    }