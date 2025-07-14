#
# @lc app=leetcode id=682 lang=python
#
# [682] Baseball Game
#

# @lc code=start
import re
class Solution(object):
    def calPoints(self, operations):
        """
        :type operations: List[str]
        :rtype: int
        """
        result = 0
        records = []
        for entry in operations:
            if entry == re.fullmatch(r"-?\d+", entry):
                records.append(int(entry))
            else:
                if entry == '+' :
                    first = records.pop()
                    second = records.pop()
                    records.append(second)
                    records.append(first)
                    records.append((first+second))

                elif entry == 'C':
                    records.pop()

                elif entry == 'D':
                    number = records.pop()
                    double = 2 * number
                    records.append(number)
                    records.append(double)
                
        for record in records:
            result = result + record

        return result

# @lc code=end

