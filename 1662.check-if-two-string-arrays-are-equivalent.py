#
# @lc app=leetcode id=1662 lang=python
#
# [1662] Check If Two String Arrays are Equivalent
#

# @lc code=start
class Solution(object):
    def arrayStringsAreEqual(self, word1, word2):
        """
        :type word1: List[str]
        :type word2: List[str]
        :rtype: bool
        """
        strWord1 = "".join(word1)
        strWord2 = "".join(word2)

        if (strWord1 == strWord2):
            return True
        else:
            return False
        
# @lc code=end

