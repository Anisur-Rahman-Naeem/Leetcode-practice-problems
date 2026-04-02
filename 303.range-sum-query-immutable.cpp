/*
 * @lc app=leetcode id=303 lang=cpp
 *
 * [303] Range Sum Query - Immutable
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class NumArray {
    vector<int> prefixSums; // This will store cumulative sums

public:
    NumArray(vector<int>& nums) {
        // First element: prefixSums[0] = nums[0]
        // We must insert it first so that prefixSums is NOT empty
        prefixSums.push_back(nums[0]);

        // Build prefix sum array
        for (int i = 1; i < nums.size(); i++)
        {
            // prefixSums[i-1] already stores sum from index 0 → i-1
            // So we add current element nums[i] to extend the sum
            prefixSums.push_back(prefixSums[i-1] + nums[i]);
        }
    }
    
    int sumRange(int left, int right) {

        // If left == 0, we want sum from 0 → right
        // prefixSums[right] already stores exactly that
        if (left == 0) return prefixSums[right];
        
        // prefixSums[right] = sum from 0 → right
        // prefixSums[left - 1] = sum from 0 → left-1
        // Subtracting removes unwanted part (0 → left-1)
        // Result = sum from left → right
        return prefixSums[right] - prefixSums[left - 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
// @lc code=end

