class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        helper("", 0, 0, n, res);
        return res;
    }

private:
    void helper(string s, int open, int close, int n, vector<string>& res) {
        if (s.length() == 2 * n) {
            res.push_back(s);
            return;
        }

        if (open < n) helper(s + "(", open + 1, close, n, res);
        if (close < open) helper(s + ")", open, close + 1, n, res);
    }
};