#
# @lc app=leetcode id=1160 lang=python
#
# [1160] Find Words That Can Be Formed by Characters
#

# @lc code=start
from collections import Counter
class Solution(object):
    def countCharacters(self, words, chars):
        """
        :type words: List[str]
        :type chars: str
        :rtype: int
        """
        charsMap = Counter(chars)
        count = 0

        for word in words:
            wordMap = Counter(word)

            for character in wordMap:
                if wordMap[character] > charsMap.get(character,0):
                    break

            else:
                count += len(word)
        return count

        
# @lc code=end

