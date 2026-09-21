class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<long long> ans(k, 0);
        vector<long long> dp(k, 0);
        for(int v : nums){
            int m = v%k;
            vector<long long> ndp(k, 0);
            for(int r = 0; r<k; r++){
                if(dp[r]==0) continue;
                ndp[(r * m) % k] += dp[r];
            }

            ndp[m] += 1;
            dp = ndp;
            for(int r=0; r<k; r++) ans[r] += dp[r];
        }
        return ans;
    }
};