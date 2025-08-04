#
# @lc app=leetcode id=771 lang=python
#
# [771] Jewels and Stones
#

# @lc code=start
class Solution(object):
    def numJewelsInStones(self, jewels, stones):
        """
        :type jewels: str
        :type stones: str
        :rtype: int
        """
        no_jewels = 0
        for element in stones:
            if element in jewels:
                no_jewels = no_jewels + 1

        return no_jewels
        
# @lc code=end

