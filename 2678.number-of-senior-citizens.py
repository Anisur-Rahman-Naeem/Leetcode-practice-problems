#
# @lc app=leetcode id=2678 lang=python
#
# [2678] Number of Senior Citizens
#7868190130M7522

# @lc code=start
class Solution(object):
    def countSeniors(self, details):
        """
        :type details: List[str]
        :rtype: int
        """
        counter = 0
        for index in range(len(details)):
            age = ""
            age += details[index][11]
            age += details[index][12]
            if int(age) > 60:
                counter+=1
        return counter
        
# @lc code=end

