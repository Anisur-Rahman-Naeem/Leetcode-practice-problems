/*
 * @lc app=leetcode id=307 lang=cpp
 *
 * [307] Range Sum Query - Mutable
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class NumArray {
    vector<int> prefixSums; // Stores cumulative sums
    vector<int> nums;       // Stores original array (needed for updates)

public:
    NumArray(vector<int>& nums) {
        this->nums = nums; // Save original array

        // Build prefix sum array
        // prefixSums[i] = sum of elements from index 0 to i
        prefixSums.push_back(nums[0]);

        for (int i = 1; i < nums.size(); i++)
        {
            prefixSums.push_back(prefixSums[i-1] + nums[i]);
        }
    }
    
    void update(int index, int val) {
        // Step 1: Find how much the value is changing
        int diff = val - nums[index]; 
        
        // Step 2: Update the original array
        nums[index] = val;

        // Step 3: Update prefix sums from 'index' to end
        // Why? Because all these prefix sums include nums[index]
        for (int i = index; i < prefixSums.size(); i++)
        {
            prefixSums[i] += diff;
        }
    }
    
    int sumRange(int left, int right) {
        // If range starts from 0, directly return prefix
        if (left == 0) return prefixSums[right];

        // Otherwise subtract the extra part
        // sum(left → right) = prefix[right] - prefix[left - 1]
        return prefixSums[right] - prefixSums[left - 1];
    }
};
/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
// @lc code=end

