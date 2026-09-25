#include<iostream>
#include<vector>
using namespace std;


vector<int> runningSum(vector<int>& nums) {
    int sum = 0;
    vector<int> res;
    for(int i=0; i<nums.size(); i++){
        sum += nums[i];
        res.push_back(sum);
    }
    return res;
}

int main(){
    vector<int> nums = {1,2,3,4};
    vector<int> result = runningSum(nums);
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl; // Output: 1 3 6 10
    return 0;
}