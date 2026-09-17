#include<iostream>
#include<vector>
using namespace std;

    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int min_value=arr[0];
        int max_value=arr[0];
        
        vector<int> res;
        for(int i=1; i<arr.size(); i++){
            if(arr[i] < min_value){
                min_value = arr[i];
            }
            if(arr[i] > max_value){
                max_value=arr[i];
            }
            res.push_back(min_value);
            res.push_back(max_value);
        }
        return res;
    }

int main(){
    vector<int> nums = {10, 12, 8, 7, 5, 13};
    vector<int> n=getMinMax(nums);
    int finalMin=n[n.size()-2];
    int finalMax=n[n.size()-1];

    cout << "This is Minimum value of given Array: " << finalMin << endl;
    cout << "This is Maximum value of given Array: " << finalMax << endl;
    
    
    return 0;

}