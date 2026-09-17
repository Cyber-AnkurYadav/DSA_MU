#include<iostream>
#include<vector>
using namespace std;

vector<int> sumAverageOfArray(vector<int> arr){
    vector<int> res;
    int sum=0;
    int avg=0;
    for(int i=0; i<arr.size(); i++){
        sum=sum+arr[i];
        avg= sum/arr.size();
    }
    res.push_back(sum);
    res.push_back(avg);


    return res;
}
int main(){
    vector<int> nums = {10, 12, 8, 7, 5, 13};
    vector<int> k = sumAverageOfArray(nums);


    cout<<"Sum of Arrays is: " <<k[0]<<endl;
    cout<<"Average of Array is: "<<k[1];

    return 0;
}