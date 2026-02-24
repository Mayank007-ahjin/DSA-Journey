#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

// Function to rotate array left or right by k steps
    vector<int> rotateArray(vector<int>& nums, int k, string direction) {
        int n = nums.size();
        if (n == 0 || k == 0) return nums;

        k = k % n;
     //moving right
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};