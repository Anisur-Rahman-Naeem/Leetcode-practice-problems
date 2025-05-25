/*
 * @lc app=leetcode id=674 lang=cpp
 *
 * [674] Longest Continuous Increasing Subsequence
 */

// @lc code=start
#include <vector>
#include <algorithm>
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int temporary_increasing_subsequence_counter = 1;
        int final_increasing_subsequence_counter = 1;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i+1] > nums[i])
            {
                temporary_increasing_subsequence_counter++;
            } else if((nums[i+1] < nums[i]) || (nums[i+1] == nums[i]))
            {
                final_increasing_subsequence_counter = max(temporary_increasing_subsequence_counter,final_increasing_subsequence_counter);
                temporary_increasing_subsequence_counter = 1;
            }
        }
        if (temporary_increasing_subsequence_counter > final_increasing_subsequence_counter)
        {
            final_increasing_subsequence_counter = temporary_increasing_subsequence_counter;
        }
        return final_increasing_subsequence_counter;
        
    }
};
// @lc code=end

