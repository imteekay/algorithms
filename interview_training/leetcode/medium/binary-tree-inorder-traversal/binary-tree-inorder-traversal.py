# https://leetcode.com/problems/binary-tree-inorder-traversal

class Solution:
    def __init__(self):
        self.inorder_list = []
    
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        if root:
            self.inorderTraversal(root.left)
            self.inorder_list.append(root.val)
            self.inorderTraversal(root.right)
            
        return self.inorder_list