#
# @lc app=leetcode id=83 lang=python
#
# [83] Remove Duplicates from Sorted List
#

# @lc code=start
# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution(object):
    def deleteDuplicates(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        curr = head
        if curr is not None:
            nxt = curr.next

        while curr and nxt is not None:
            if curr.val == nxt.val:
                nxt = nxt.next
                continue

            curr.next = nxt
            curr = nxt
            nxt = nxt.next
        if curr is not None:
            curr.next = None
        return head
        
# @lc code=end

