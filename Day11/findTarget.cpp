#include<iostream>
#include<vector>
using namespace std;

int findTarget(vector<int> arr, int tar){
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==tar){
            return i;
        }
    }
    return -1;

}

int main(){
    vector<int> nums = {10, 12, 8, 7, 5, 13};
    int target=13;
    int k = findTarget(nums, target);
    if(k!=0) {
        cout<<"Target Found at Index: "<< k ;

    }else cout<<"Target Not Found ";


    return 0;
}