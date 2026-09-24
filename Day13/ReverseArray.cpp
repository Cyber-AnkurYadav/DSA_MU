#include<iostream>
#include<vector>
using namespace std;

// int swap(int a, int b){
//     int temp = a;
//     a=b;
//     b=temp;
//     return a, b;

// }


// vector<int>  reverseArray(vector<int> arr) {
//     int start = 0;
//     int end = arr.size() - 1;
    
//     while(start < end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
    
//     return arr;
// }

//sorting the array in using two pointer approach
vector<int> sortArray(vector<int> arr) {
    int start = 0;
    int end = arr.size() - 1;
    while(start < end) {
        if(arr[start] ==0 ){
            start++;
        } else if(arr[end] == 1){
            end--;
        } else {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
return arr;
}   

//using three pointer approach

vector<int> sortaArray(vector<int> arr) {
    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;
    while(mid <= high) {
        if(arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if(arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[high]);
           high--;
        }
    }
    return arr;
}

int main() {
    vector<int> arr = {1, 0, 1, 0, 1, 0};
    vector<int> newarr={1,2,0,2,1,0,0,1,2,0,1,2};


    vector<int> sortedArr = sortArray(arr);
    vector<int> sortedArr3 = sortaArray(newarr);

    cout << "Sorted Array: ";
    for(int i=0; i<sortedArr.size(); i++) {
        cout << sortedArr[i] << " ";
    }
    cout << endl;

    cout << "Sorted Array (Three Pointer): ";
    for(int i=0; i<sortedArr3.size(); i++) {
        cout << sortedArr3[i] << " ";
    }
    cout << endl;

    return 0;
}