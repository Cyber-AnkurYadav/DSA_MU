class Solution {
public:
    int reverseDegree(string s) {
        int product=0;
        
        for(int i=0; i<s.length(); i++){
            int rev = 'z' - s[i]+1;
            product += rev*(i+1);
        }
        return product;
    }
};