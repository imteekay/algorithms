# https://leetcode.com/problems/n-ary-tree-postorder-traversal

result = []

def postorder(root):
    if root is None: return []
    
    for node in root.children:
        postorder(node)
        
    result.append(root.val)
    return result
