#include<iostream>
#include<vector>
using namespace std;
vector<int> countOddEven(vector<int> arr){
    vector<int> res;
    int even=0;
    int odd=0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    res.push_back(even);
    res.push_back(odd);
    return res;

}

int main(){
    vector<int> nums ={10, 12, 8, 7, 5, 13};
    vector<int> k = countOddEven(nums);
    cout << "Even is: "<< k[0] <<endl;
    cout << "Odd is : "<< k[1];


}