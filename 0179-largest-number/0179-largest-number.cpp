class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> str;
        for(int i=0; i<nums.size(); i++){
            str.push_back(to_string(nums[i]));

        }
        sort(str.begin(), str.end(), [](string x, string y){
            return x+y > y+x;
        });
        if(str[0]=="0") return "0";

        string ans;
        for(auto s : str) ans += s;

        return ans;
    }
};