#
# @lc app=leetcode id=1002 lang=python
#
# [1002] Find Common Characters
#

# @lc code=start

from collections import Counter

class Solution(object):
    def commonChars(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        first_element_counter = Counter(words[0])
        for word in words[1:]:
            first_element_counter &= Counter(word)

        result = list(first_element_counter.elements())
        return result
# @lc code=end

