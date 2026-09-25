#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            ans.push_back(nums[nums[i]]);
        }
        return ans;
    }
};


int main() {
    Solution solution;
    vector<int> nums = {0,2,1,5,3,4};
    vector<int> result = solution.buildArray(nums);
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl; // Output: 0 1 2 4 5 3
    return 0;
}