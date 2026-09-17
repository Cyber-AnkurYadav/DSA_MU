#include<iostream>
using namespace std;
vector<int> reverseArray(vector<int> arr){
    int str=0;
    int end=
}

int main(){
    int arr[8]={-10, 12, 8, -7, 5, -13, 0, 2};
    int str=0;
    int end=7;
    while(str<=end){
        arr[str], arr[end] = arr[end], arr[str];
        str++;
        end--;
    }
    cout<<"[";
    for(int i=0; i<8; i++){
        cout<<arr[i];
    }
    cout<<"]";
    return 0;
}