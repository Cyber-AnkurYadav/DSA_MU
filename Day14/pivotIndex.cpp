#include<iostream>
#include<vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int totalSum=0;
    int ls = 0;
    for(int x : nums){
        totalSum += x;
    }
    int rs = totalSum;
    for(int i=0; i<nums.size(); i++){
        rs -= nums[i];
        if(ls == rs) return i;
        ls += nums[i];
    }
    return -1;
}


int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    cout << pivotIndex(nums) << endl; // Output: 3
    return 0;
}