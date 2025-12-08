/*
 * @lc app=leetcode id=191 lang=cpp
 *
 * [191] Number of 1 Bits
 */

// @lc code=start
class Solution {
public:
int count = 0;
    int hammingWeight(int n) {
        while (n!=0)
        {
            n = n & (n-1);
            count++;
        }
        return count;
    }
};
// @lc code=end

