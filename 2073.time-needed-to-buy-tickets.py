#
# @lc app=leetcode id=2073 lang=python
#
# [2073] Time Needed to Buy Tickets
#

# @lc code=start
class Solution(object):
    def timeRequiredToBuy(self, tickets, k):
        """
        :type tickets: List[int]
        :type k: int
        :rtype: int
        """
        seconds = 0

        while tickets[k] != 0:
            for index, value in enumerate(tickets):
                if tickets[index] == 0 and index != k:
                    continue
                seconds = seconds + 1
                if index == k:
                    if tickets[index] > 0:
                        tickets[index] -= 1
                    if tickets[index] == 0:
                        return seconds

                else:
                    tickets[index] = tickets[index] - 1
        
# @lc code=end

