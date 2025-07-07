# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def isBalanced(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: bool
        """
        if not root:
            return True
        
        def check(node):
            if not node:
                return 0, True
            left_height, is_left_balanced = check(node.left)
            right_height, is_right_balanced = check(node.right)

            current_height = 1 + max(left_height, right_height)
            current_balanced = is_left_balanced and is_right_balanced and abs(left_height - right_height) <=1

            return current_height, current_balanced

        return check(root)[1]