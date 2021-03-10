def increasingBST(root):
    arr = []
    helper(root, arr)

    ans = current = TreeNode(arr[0])
    
    for val in arr[1:]:
        current.right = TreeNode(val)
        current = current.right
        
    return ans
        
def helper(self, old_tree, arr):
    if old_tree.left: helper(old_tree.left, arr)
    arr.append(old_tree.val)
    if old_tree.right: helper(old_tree.right, arr)
