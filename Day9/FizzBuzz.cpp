#include<iostream>
#include<vector>
#include<string>
using namespace std;

// Given an integer n, return a string array answer (1-indexed) where:

// answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
// answer[i] == "Fizz" if i is divisible by 3.
// answer[i] == "Buzz" if i is divisible by 5.
// answer[i] == i (as a string) if none of the above conditions are true.

vector<string> fizzBuzz(int n){
    vector<string> ans;
    for(int i=1; i<=n; i++){
        if(i%3==0 && i%5==0) ans.push_back("FizzBuzz");
        else if(i%3==0) ans.push_back("Fizz");
        else if(i%5==0) ans.push_back("Buzz");
        else ans.push_back(to_string(i));
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter a Number to check FizzBuzz Game: ";
    cin>>n;
    vector<string> result = fizzBuzz(n);

    cout<<"[";
    for(int i=0; i<result.size(); i++){
        cout<<" " << result[i];
        if( i < result.size()-1) cout << ",";
    }
    cout<<"]";
    return 0;
}