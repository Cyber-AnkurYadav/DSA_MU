class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int n = nums[i], sum = 0;

            // digits ka sum nikaalo
            while (n > 0) {
                sum += n % 10;
                n /= 10;
            }

            // agar digit sum index ke barabar hai, to yahi smallest index hai
            if (sum == i) return i;
        }
        return -1;
    }
};