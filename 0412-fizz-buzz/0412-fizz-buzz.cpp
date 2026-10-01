class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        for(int i=1; i<=n; i++){
            (i%3==0 && i%5==0) ? answer.push_back("FizzBuzz") : (i%3==0) ? answer.push_back("Fizz") : (i%5==0) ? answer.push_back("Buzz") : answer.push_back(to_string(i));
        }
        return answer;
    }
};