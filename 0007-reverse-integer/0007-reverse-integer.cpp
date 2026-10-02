class Solution {
public:
    int reverse(int x) {
        
        int min_range = pow(-2, 31);
        int max_range = pow(2, 31)-1;
        int rev=0;
        while(x!=0){
            int digit = x%10;
            if(rev<(min_range/10) || rev>(max_range/10)) return 0;
            rev = rev*10+digit;
            x /= 10;
        }
        return rev;
    }
};