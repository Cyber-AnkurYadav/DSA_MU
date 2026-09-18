#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> arr, int target){
    unordered_map<int, int> map;
    for(int i=0; i<arr.size(); i++){
        int com=target-arr[i];
        if(map.find(com) != map.end()){
            return {map[com], i};
        }
        map[arr[i]]=i;
    }
    return {};

}

int main(){
    vector<int> nums = {10, 12, 8, 7, 5, 13};
    int target = 15;
    vector<int> k = twoSum(nums, target);
    cout<<"[" << k[0]<<", ";
    cout<<k[1]<<"]";
    return 0;
}