/*
 * @lc app=leetcode id=1248 lang=cpp
 *
 * [1248] Count Number of Nice Subarrays
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numberOfSubarrays(vector<int> &nums, int k)
    {
        int count = 0;          // Stores total number of valid subarrays
        int prefixSum = 0;      // Running sum from index 0 → i
        
        unordered_map<int,int> freq;
        freq[0] = 1;  
        // VERY IMPORTANT:
        // This handles cases where prefixSum itself == goal
        // (i.e., subarray starts from index 0)

        for (int i = 0; i < nums.size(); i++)
        {
            prefixSum += nums[i] % 2;   // Update running sum
            
            // Check if there exists a previous prefix sum
            // such that removing it gives sum = goal
            if (freq.find(prefixSum - k) != freq.end())
            {
                count += freq[prefixSum - k];
            }

            // Store current prefix sum in map
            freq[prefixSum]++;
        }

        return count;
    }
};
// @lc code=end
