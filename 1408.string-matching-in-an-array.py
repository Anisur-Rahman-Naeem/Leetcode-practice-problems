#
# @lc app=leetcode id=1408 lang=python
#
# [1408] String Matching in an Array
#

# @lc code=start
class Solution(object):
    def stringMatching(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        result = set()

        for word in words:
            for subword in words:
                if (subword != word) and subword in word:
                    result.add(subword)
        
        return list(result)
        
# @lc code=end

