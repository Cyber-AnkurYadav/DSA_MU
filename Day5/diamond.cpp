#include <iostream>
using namespace std;

void diamond(int row){

    for(int i=1; i<=row; i++){
        //for Spaces
        for(int j=i; j<row; j++){
            cout<<" ";
        }

        //for Stars
        for(int j=1; j<=(2*i-1); j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1; i<row; i++){
        //for Spaces
        for(int j=1; j<i; j++){
            cout<<" ";
        }
        

        //for Stars
        for(int j= 0; j<=((row-i)*2)-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int row;
    cout<<"Enter number of Rows: ";
    cin>>row;
    diamond(row);
    return 0;
}