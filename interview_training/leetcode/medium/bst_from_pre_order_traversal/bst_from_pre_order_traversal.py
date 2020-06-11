class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def bst_from_preorder(preorder):
    root = TreeNode(preorder[0])

    for value in preorder[1:]:
        helper(root, value)

    return root


def helper(node, value):
    if value < node.val and node.left:
        helper(node.left, value)
    elif value < node.val:
        node.left = TreeNode(value)

    if value > node.val and node.right:
        helper(node.right, value)
    elif value > node.val:
        node.right = TreeNode(value)

    return node
