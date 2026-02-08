/*
 * @lc app=leetcode id=976 lang=cpp
 *
 * [976] Largest Perimeter Triangle
 */

// @lc code=start
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for (int i = nums - 1; i >= 2; i--)
        {
            int a = nums[i - 2];
            int b = nums[i - 1];
            int c = nums[i];

            if (a + b > c)
            {
                return a+b+c;
            }
            
        }
        
    }
};
// @lc code=end

