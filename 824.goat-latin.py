#
# @lc app=leetcode id=824 lang=python
#
# [824] Goat Latin
#

# @lc code=start
class Solution(object):
    def toGoatLatin(self, sentence):
        """
        :type sentence: str
        :rtype: str
        """
        words = sentence.split()
        vowels = set('aeiouAEIOU')
        result = []

        for index, word in enumerate(words):
            if word[0] in vowels:
                new_word = word + 'ma'
            else:
                new_word = word[1:] + word[0] + 'ma'

            new_word += "a" * (index +1)
            result.append(new_word)

        return " ".join(result)
# @lc code=end

