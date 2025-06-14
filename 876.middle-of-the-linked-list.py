#
# @lc app=leetcode id=876 lang=python3
#
# [876] Middle of the Linked List
#

# @lc code=start
# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        slowPtr = head
        fastPtr = head

        while fastPtr and fastPtr.next is not None:
            slowPtr = slowPtr.next
            fastPtr = fastPtr.next.next

        return slowPtr
        
# @lc code=end

