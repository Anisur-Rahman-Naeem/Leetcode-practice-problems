#
# @lc app=leetcode id=2496 lang=python
#
# [2496] Maximum Value of a String in an Array
#

# @lc code=start
class Solution(object):
    def maximumValue(self, strs):
        """
        :type strs: List[str]
        :rtype: int
        """
        max_value = 0
        for word in strs:
            if word.isdigit():

                if int(word) > max_value:
                    max_value = int(word) 
            else:

                if len(word) > max_value:
                    max_value = len(word)
        
        return max_value

# @lc code=end

