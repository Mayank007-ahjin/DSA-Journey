#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest =arr[0];
        int sec_largest=-1;
        for(int i=1;i<arr.size();i++){
            if(largest<arr[i]){
                sec_largest=largest;
                largest=arr[i];}
            else if (arr[i]<largest && sec_largest < arr[i]){
                sec_largest=arr[i];
            }
                
        }
    
        return sec_largest;
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
    int result = sol.getSecondLargest(arr);
    
    if(result != -1){
        cout<<"The second largest element in the array is: "<<result<<endl;
    } else {
        cout<<"There is no second largest element in the array."<<endl;
    }
    
    return 0;
}