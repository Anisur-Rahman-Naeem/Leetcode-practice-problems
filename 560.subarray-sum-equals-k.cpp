/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int sum = 0;     // This will store the running sum of current subarray
        int count = 0;   // This counts how many subarrays have sum == k

        // Outer loop: fixes the starting index 'i' of subarray
        for (int i = 0; i < nums.size(); i++)
        {
            sum = 0;  
            // 🔴 IMPORTANT:
            // Reset sum for every new starting index
            // Because now we are starting a completely new subarray from 'i'

            // Inner loop: expands subarray from i → j
            for (int j = i; j < nums.size(); j++)
            {
                sum += nums[j];  
                // ✅ Instead of recomputing sum from scratch,
                // we are reusing previous sum and just adding nums[j]
                // This is the key optimization over O(n³)

                if (sum == k)
                {
                    count++;  
                    // ✅ Every time we find a subarray [i...j] with sum k,
                    // we increment count
                }
            }
        }

        return count;  // total number of valid subarrays
    }
};
// @lc code=end

