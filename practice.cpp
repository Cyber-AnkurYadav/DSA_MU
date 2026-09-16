#include <iostream>
using namespace std;

int main(){
    // int a = 5;
    // cout << a << endl;
    // ++a;
    // cout << a << endl;
    // a++;
    // cout << a << endl;

    int arr[5]={2, 4, 6, 8, 9};

    for(int i=0; i<5; i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    for(auto& i : arr){
        cout<<i<<endl;
    }
    return 0;
}