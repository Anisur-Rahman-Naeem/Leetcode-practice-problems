#
# @lc app=leetcode id=155 lang=python
#
# [155] Min Stack
#

# @lc code=start
from collections import deque
class MinStack(object):
    

    def __init__(self):
        self.q = deque()
        self.min_stack = deque()

    def push(self, val):
        """
        :type val: int
        :rtype: None
        """
        self.q.append(val)

        if not self.min_stack or val<=self.min_stack[-1]:
            self.min_stack.append(val)
        else:
            self.min_stack.append(self.min_stack[-1])
        
        

    def pop(self):
        """
        :rtype: None
        """
        if self.q:
            val = self.q.pop()
        if self.min_stack :
            self.min_stack.pop()
        

    def top(self):
        """
        :rtype: int
        """
        if self.q:
            return self.q[-1]
        return None
        

    def getMin(self):
        """
        :rtype: int
        """
        if self.min_stack:
            return self.min_stack[-1]
        return None

        


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()
# @lc code=end

