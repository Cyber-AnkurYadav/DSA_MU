#include <iostream>
using namespace std;

int main(){

    // int N;
    // cout << "Enter the size of the 2D array (N): ";
    // cin >> N;
    // for (int i=0; i<N; i++){
    //     for (int j=0; j<N-i; j++){
    //         cout << " ";
    //     }
    //     for ( int j=0; j<i*2+1; j++){
    //         cout << "*";
    //     }
    //     cout << endl;

    // }

    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";

        }
        cout<<endl;
    }

    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cout<< "*";
        }
        cout<<endl;
    }


    // for (int i=N; i>=0; i--){
    //     for (int j=0; j<N-i; j++){
    //         cout << " ";
    //     }
    //     for ( int j=0; j<i*2-1; j++){
    //         cout << "*";
    //     }
    //     cout << endl;

    // }

    // for(int i=0; i<=N; i++){
    //     for(int j=0; j<=N; j++){
    //         if(i==0 || i==N || j==0 || j==N){
    //             cout << "*";
    //         }
    //         else{
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }


    // for (int i=0; i<N; i++){
    //     for (int j=0; j<i; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    //     for (int j=0; j<N-i; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    return 0;
    
}