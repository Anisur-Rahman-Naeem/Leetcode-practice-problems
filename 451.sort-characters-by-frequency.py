#
# @lc app=leetcode id=451 lang=python
#
# [451] Sort Characters By Frequency
#

# @lc code=start
from collections import Counter
class Solution(object):
    def frequencySort(self, s):
        """
        :type s: str
        :rtype: str
        """
        result = ""
        map_s = Counter(s)

        for keys, values in map_s.most_common():
            if map_s.get(keys,0) != 0:
                result += str(keys) * values

        return result
        
# @lc code=end

