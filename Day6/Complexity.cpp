#include<iostream>
#include<vector>
using namespace std;


int missingNumber(vector<int>& nums){
    int n = nums.size();
    int sum = n*(n+1)/2;
    int arrsum=0;
    for(int i=0; i<n; i++){
        int digit=nums[i];
        arrsum += digit;
    }
    return sum-arrsum;    
}


int main(){
    vector<int> nums={1,3,4,5,0};
    cout<< missingNumber(nums);
}