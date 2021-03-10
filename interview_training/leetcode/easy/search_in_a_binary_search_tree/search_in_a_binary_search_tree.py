# https://leetcode.com/problems/search-in-a-binary-search-tree

def searchBST(root, val):
    if root is None: return None
    
    if val < root.val:
        found_node = searchBST(root.left, val)
        if found_node: return found_node
        
    if val > root.val:
        found_node = searchBST(root.right, val)
        if found_node: return found_node
        
    if val == root.val: return root
    
    return None
