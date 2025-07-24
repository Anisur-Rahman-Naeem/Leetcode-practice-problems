#
# @lc app=leetcode id=551 lang=python
#
# [551] Student Attendance Record I
#

# @lc code=start
class Solution(object):
    def checkRecord(self, s):
        """
        :type s: str
        :rtype: bool
        """

        absent_counter = 0
        late_counter = 0

        for record in s:
            if record == 'A':
                absent_counter = absent_counter + 1

        if ((absent_counter >= 2 and ('LLL' in s)) or  (absent_counter >= 2 or ('LLL' in s))):
            return False
        else:
            return True
        
# @lc code=end

