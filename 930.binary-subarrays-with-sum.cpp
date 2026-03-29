/*
 * @lc app=leetcode id=930 lang=cpp
 *
 * [930] Binary Subarrays With Sum
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        int count = 0;          // Stores total number of valid subarrays
        int prefixSum = 0;      // Running sum from index 0 → i
        
        unordered_map<int,int> freq;
        freq[0] = 1;  
        // VERY IMPORTANT:
        // This handles cases where prefixSum itself == goal
        // (i.e., subarray starts from index 0)

        for (int i = 0; i < nums.size(); i++)
        {
            prefixSum += nums[i];   // Update running sum
            
            // Check if there exists a previous prefix sum
            // such that removing it gives sum = goal
            if (freq.find(prefixSum - goal) != freq.end())
            {
                count += freq[prefixSum - goal];
                // Add ALL occurrences of (prefixSum - goal)
                // because each occurrence forms a valid subarray
            }

            // Store current prefix sum in map
            freq[prefixSum]++;
        }

        return count;  // Final answer
    }
};
// @lc code=end

