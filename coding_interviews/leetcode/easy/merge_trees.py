'''
https://leetcode.com/problems/merge-two-binary-trees/description/

Input:
	Tree 1                     Tree 2
          1                         2
         / \                       / \
        3   2                     1   3
       /                           \   \
      5                             4   7

Output:
Merged tree
	     3
	    / \
	   4   5
	  / \   \
	 5   4   7
'''

class TreeNode(object):
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None

def merge_trees(t1, t2):
    if not t1 and not t2: return None

    new_node = TreeNode((t1.val if t1 else 0) + (t2.val if t2 else 0))
    new_node.left = merge_trees(t1 and t1.left, t2 and t2.left)
    new_node.right = merge_trees(t1 and t1.right, t2 and t2.right)

    return new_node
