# https://leetcode.com/problems/binary-tree-inorder-traversal

class Solution:
    def __init__(self):
        self.inorder_list = []

    def inorder_traversal(self, root):
        if root:
            self.inorder_traversal(root.left)
            self.inorder_list.append(root.val)
            self.inorder_traversal(root.right)

        return self.inorder_list