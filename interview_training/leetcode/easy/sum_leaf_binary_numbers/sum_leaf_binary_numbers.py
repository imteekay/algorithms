# https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers

total_binary_sum = 0

def sum_root_to_leaf(root):
    if root is None: return
    helper(root, str(root.val))
    return total_binary_sum
    
def helper(node, path):
    if node.left:
        helper(node.left, path + str(node.left.val))
        
    if node.right:
        helper(node.right, path + str(node.right.val))

    if node.right is None and node.left is None:
        total_binary_sum += int(path, 2)

