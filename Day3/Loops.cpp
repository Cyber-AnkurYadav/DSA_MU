
#include <iostream>
using namespace std;

int main(){
    string firstName, lastName;
    cout<<"Enter your first name: " << endl;
    cin>>firstName;
    cout<<"Enter your last name: " << endl;
    cin>>lastName;
    for(int i=0; i<5; i++){
        cout<< "Hello " << firstName << " " << lastName << endl;
    }


    int i = 0;
    while(i<5){
        cout<< "Hello " << firstName << " " << lastName << endl;
        i++;
    }


    do{
        cout<< "Hello " << firstName << " " << lastName << endl;
        i++;
    }while(i<5);


    //Nested Loop
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<< "Hello " << firstName << " " << lastName << endl;
        }
    }
    return 0;
}

