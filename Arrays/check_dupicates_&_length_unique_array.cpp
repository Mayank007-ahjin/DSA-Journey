#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        //for empty arrya:
        if (nums.empty()){return 0;}
        for(int j=1;j<nums.size();j++){
            if (nums[j]!=nums[i]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
     
    }
};