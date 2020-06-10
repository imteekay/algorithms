class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def insert_into_BST(root, val):
    if root is None:
        return TreeNode(val)

    if val < root.val:
        root.left = insert_into_BST(root.left, val)

    if val > root.val:
        root.right = insert_into_BST(root.right, val)

    return root
