# https://leetcode.com/problems/range-sum-of-bst/submissions/

'''
Given the root node of a binary search tree,
return the sum of values of all nodes with value between L and R (inclusive).

The binary search tree is guaranteed to have unique values.

Example 1:
Input: root = [10,5,15,3,7,null,18], L = 7, R = 15
Output: 32

Example 2:
Input: root = [10,5,15,3,7,13,18,1,null,6], L = 6, R = 10
Output: 23
'''


def rangeSumBST(root, L, R):
    left_sum = 0
    right_sum = 0
    root_sum = 0

    if root.left is not None and root.val > L:
        left_sum = rangeSumBST(root.left, L, R)

    if root.right is not None and root.val < R:
        right_sum = rangeSumBST(root.right, L, R)

    if root.val >= L and root.val <= R:
        root_sum = root.val

    return root_sum + left_sum + right_sum
