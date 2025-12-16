/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
#include <vector>
class Solution {
public:
int ans = 0;
    int singleNumber(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++)
        {
            ans = ans^nums[i];
        }
        return ans;
    }
};
// @lc code=end

