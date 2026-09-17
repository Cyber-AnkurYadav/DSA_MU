#include<iostream>
#include<vector>
using namespace std;

vector<int> arrayConcatination(vector<int> nums){
    int n = nums.size();
        vector<int> ans(2*n);
        for(int i=0; i<n; i++){
            ans[i]=nums[i];
            ans[i+n]=nums[i];
        }
        return ans;
}

int main(){
    vector<int> nums={5,3,6,8,5,4,7,9};
    vector<int> n=arrayConcatination(nums);
    for(int i=0; i<n.size(); i++){
        cout<<n[i]<<" ";
    }
    return 0;
}