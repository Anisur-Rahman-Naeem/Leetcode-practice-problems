/*
 * @lc app=leetcode id=441 lang=cpp
 *
 * [441] Arranging Coins
 */

// @lc code=start
class Solution
{
public:
    int arrangeCoins(int n)
    {
        int rows = 0;

        while (n >= rows + 1)
        {
            rows++;
            n-=rows;
        }
        return rows;
    }
};
// @lc code=end
