#
# @lc app=leetcode id=412 lang=python
#
# [412] Fizz Buzz
#

# @lc code=start
class Solution(object):
    def fizzBuzz(self, n):
        """
        :type n: int
        :rtype: List[str]
        """

        answer = []

        for index in range(1,n+1):
            if (index %3 == 0) and (index %5 == 0):
                answer.append("FizzBuzz")
            elif (index %3 == 0):
                answer.append("Fizz")
            elif (index %5 == 0):
                answer.append("Buzz")
            else:
                answer.append(str(index))

        return answer
        
# @lc code=end

