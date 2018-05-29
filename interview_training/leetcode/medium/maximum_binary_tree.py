'''
https://leetcode.com/problems/maximum-binary-tree/description/

Input: [3,2,1,6,0,5]
Output: return the tree root node representing the following tree:

      6
    /   \
   3     5
    \    /
     2  0
       \
        1
'''

class TreeNode(object):
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

def construct_maximum_binary_tree(nums):
    if not nums: return None
    root_node = TreeNode(max(nums))
    root_node.left = construct_maximum_binary_tree(nums[0:nums.index(max(nums))])
    root_node.right = construct_maximum_binary_tree(nums[nums.index(max(nums))+1:])
    return root_node
