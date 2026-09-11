#include<iostream>
using namespace std;



int DigitExtrction(int n){

    int count = 0;
    while(n>0){
        count++;
        n=n/10;
    }
    return count;
}


//sum of numbers

int SumOfNumbers(int n){
    int sum = 0;
    while(n>0){
        int digit = n % 10;
        sum = sum + digit;
        n = n/10;
    }
    return sum;
}

int ReverseDigits(int x){
    int rev=0;
    while(x>0){
        int digit = x%10;
        rev = (rev*10) + digit;
        x = x/10;
    }
    return rev;
}


bool isPalindrome(int n){
    int org = abs(n);
    int rev = ReverseDigits(org);
    if(org==rev){
        return true;
    }
    return false;
}


int main(){
    int n=-12321;
    cout<<boolalpha<<isPalindrome(n);
}
