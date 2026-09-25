#include<iostream>
#include<vector>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int maxSum=0;
    for(int i=0; i < accounts.size(); i++){
        int sum=0;
        for (int j=0; j<accounts[0].size(); j++){
            sum += accounts[i][j];
            maxSum = max(maxSum, sum);
        }
        
    }
    return maxSum;
}


int main() {
    vector<vector<int>> accounts = {{1,2,3},{3,2,1}};
    cout << maximumWealth(accounts) << endl; // Output: 6
    return 0;
}