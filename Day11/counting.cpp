#include<iostream>
#include<vector>
using namespace std;
vector<int> countingNumbers(vector<int>& arr){
    vector<int> res;
    int neg = 0;
    int zero = 0;
    int pos = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]== 0){
            zero++;
        }else if(arr[i]<0){
            neg++;
        }else{
            pos++;
        }

    }
    res.push_back(zero);
    res.push_back(neg);
    res.push_back(pos);

    return res;
}
int main(){
    vector<int> arr={-10, 12, 8, -7, 5, -13, 0, 2};
    vector<int> t = countingNumbers(arr);
    
    cout << "Count of Zeros in this Array: "     << t[0] << endl;
    cout << "Count of Negative numbers is: "     << t[1] << endl;
    cout << "Count of Positive numbers is: "     << t[2] << endl;
    
    return 0;
}   