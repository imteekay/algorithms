# https://leetcode.com/problems/n-ary-tree-postorder-traversal

result = []

def preorder(root):
    if root is None: return []
    
    result.append(root.val)

    for node in root.children:
        preorder(node)
        
    return result
