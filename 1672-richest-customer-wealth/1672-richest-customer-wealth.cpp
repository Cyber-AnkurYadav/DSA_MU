class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxSum=0;
        for(auto row : accounts){
            int sum = accumulate(row.begin(), row.end(), 0);
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};