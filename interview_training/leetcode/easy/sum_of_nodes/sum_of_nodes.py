# https://leetcode.com/problems/sum-of-nodes-with-even-valued-grandparent

'''
Given a binary tree, return the sum of values of nodes with even-valued grandparent.
(A grandparent of a node is the parent of its parent, if it exists.)

If there are no nodes with an even-valued grandparent, return 0.
'''


def sum_even_grandparent(node):
    left = 0
    right = 0

    if node.left and node.left.left and node.val % 2 == 0:
        left += node.left.left.val

    if node.left and node.left.right and node.val % 2 == 0:
        left += node.left.right.val

    if node.left:
        left += sum_even_grandparent(node.left)

    if node.right and node.right.left and node.val % 2 == 0:
        right += node.right.left.val

    if node.right and node.right.right and node.val % 2 == 0:
        right += node.right.right.val

    if node.right:
        right += sum_even_grandparent(node.right)

    return right + left


def sum_even_grandparent_2(node):
    return helper(node, 1, 1)


def helper(node, parent, grandparent):
    if node is None:
        return 0

    return helper(node.left, node.val, parent) \
        + helper(node.right, node.val, parent) \
        + (node.val if grandparent % 2 == 0 else 0)
