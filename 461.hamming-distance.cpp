/*
 * @lc app=leetcode id=461 lang=cpp
 *
 * [461] Hamming Distance
 */

// @lc code=start
class Solution {
    int count = 0;
public:
    int hammingDistance(int x, int y) {
        int result = x ^ y;
        while (result != 0)
        {
            result = result & (result -1);
            count++;
        }
        
    }
};
// @lc code=end

