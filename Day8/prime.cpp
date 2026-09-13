#include<iostream>
#include<cmath>
using namespace std;

int main(){
//Check the Given Number is Prime Number or Not 

    int x,cnt=0,p=1;
    cout<<"Enter A Number to check prime number: ";
    cin>>x;

    //Using While Loop
    while(p<=x){
        if(x%p==0){

            cnt++;
        }
        p++;
    }
    if(cnt==2){
        cout<<"Number is Prime ";
    }else{
        cout<<"Number is not Prime ";
    }

    cnt=0;
    cout<<endl;

    //Using For Loop
    for(int j=1; j<=x; j++){
        if(x%j==0){
            cnt++;
        }
    }
    if(cnt==2){
        cout<<"Number is Prime ";
    }else{
        cout<<"Number is not Prime ";
    }




}