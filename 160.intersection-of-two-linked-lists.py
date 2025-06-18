#
# @lc app=leetcode id=160 lang=python
#
# [160] Intersection of Two Linked Lists
#

# @lc code=start
# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution(object):
    def getIntersectionNode(self, headA, headB):
        """
        :type head1, head1: ListNode
        :rtype: ListNode
        """
        if not headA or not headB:
            return None
        pointerA = headA
        pointerB = headB

        while pointerA != pointerB:
            # If pointerA reaches end, go to headB; else move to next nod
            pointerA = pointerA.next if pointerA else headB
            # If pointerB reaches end, go to headA; else move to next node
            pointerB = pointerB.next if pointerB else headA

        return pointerB
        
# @lc code=end

