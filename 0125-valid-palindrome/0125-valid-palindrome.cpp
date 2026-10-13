class Solution {
public:
    bool isPalindrome(string s) {
        string clean = "";
        for(char ch : s){
            if(isalnum(static_cast<unsigned char> (ch))){
                clean += tolower(static_cast<unsigned char>(ch));
            }
        }
        string rev = clean;
        reverse(rev.begin(), rev.end());
        if(rev == clean) return true;
        else return false;
    }
};