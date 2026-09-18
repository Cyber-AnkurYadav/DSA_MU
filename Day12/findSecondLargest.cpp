#include<iostream>
#include<vector>
using namespace std;

int findSecondMax(vector<int> arr){
    int max=0;
    int pre=0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]>max){
            pre=max;
            max=arr[i];
        }
    }
    return pre;
}

int main(){
    vector<int> nums = {10, 12, 8, 7, 5, 13};
    int k = findSecondMax(nums);
    cout<<"Second Largest Number is: "<<k;

    return 0;
}