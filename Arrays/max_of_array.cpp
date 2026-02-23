//Given an array arr[]. The task is to find the largest element and return it
#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    int largest(vector<int> &arr) {
        
        int largest = arr[0];
        
        for(int i = 1; i < arr.size(); i++){
            if(largest < arr[i]){
                largest = arr[i];
            }
        }
        
        return largest;
    }
};
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    Solution sol;
    int result = sol.largest(arr);
    
    cout<<"The largest element in the array is: "<<result<<endl;
    
    return 0;
}