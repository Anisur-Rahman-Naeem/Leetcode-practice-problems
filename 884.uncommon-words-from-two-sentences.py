#
# @lc app=leetcode id=884 lang=python
#
# [884] Uncommon Words from Two Sentences
#

# @lc code=start
from collections import Counter
class Solution(object):
    def uncommonFromSentences(self, s1, s2):
        """
        :type s1: str
        :type s2: str
        :rtype: List[str]
        """
        joined_str = s1+' '+s2
        joined_str = joined_str.split()

        map_jointed_str = Counter(joined_str)

        min_value = min(map_jointed_str.values())

        if min_value == 1:
            keys = [k for k,v in map_jointed_str.items() if v == min_value]
            return keys
        else:
            return []

# @lc code=end

