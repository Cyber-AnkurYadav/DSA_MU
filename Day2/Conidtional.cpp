#include <iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    //if Statement
    if(marks >= 50){
        cout << "You have passed the exam." << endl;
    }
    else{
        cout << "You have failed the exam." << endl;
    }


    if(marks>=90){
        
        cout << "You have got A grade." << endl;
    }
    else if(marks>=80 && marks<90){
        cout << "You have got B grade." << endl;
    }
    else if(marks>=70 && marks<80){
        cout << "You have got C grade." << endl;
    }
    else if(marks>=60 && marks<70) {
        cout << "You have got D grade." << endl;
    }
    else if(marks>=50 && marks<60){
        cout << "You have got E grade." << endl;
    }
    else{
        cout << "You have failed the exam." << endl;
    }


    int ch;
    cout<<"Enter your choice (1-12 ): ";
    cin>>ch;
    switch (ch){
        
        case 1:
            cout<<"January"<<endl;
            break;
        case 2:
            cout<<"February"<<endl;
            break;
        case 3:
            cout<<"March"<<endl;
            break;
        case 4:
            cout<<"April"<<endl;
            break;
        case 5:
            cout<<"May"<<endl;
            break;
        case 6:
            cout<<"June"<<endl;
            break;
        case 7:
            cout<<"July"<<endl;
            break;
        case 8:
            cout<<"August"<<endl;
            break;
        case 9:
            cout<<"September"<<endl;
            break;
        case 10:
            cout<<"October"<<endl;
            break;
        case 11:
            cout<<"November"<<endl;
            break;
        case 12:
            cout<<"December"<<endl;
            break;

        default:
            cout << "Aap Chutiye hai." << endl;
    }



    




    return 0;
}