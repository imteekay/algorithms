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

    maximum_number = max(nums)
    maximum_number_index = nums.index(maximum_number)

    left_side_nums = nums[0:maximum_number_index]
    right_side_nums = nums[maximum_number_index+1:]

    root_node = TreeNode(maximum_number)
    root_node.left = construct_maximum_binary_tree(left_side_nums)
    root_node.right = construct_maximum_binary_tree(right_side_nums)

    return root_node
