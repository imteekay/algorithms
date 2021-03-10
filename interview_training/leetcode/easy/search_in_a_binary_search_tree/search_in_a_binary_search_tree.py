# https://leetcode.com/problems/search-in-a-binary-search-tree

def searchBST(root, val):
    if root and val < root.val:
        return searchBST(root.left, val)
        
    if root and val > root.val:
        return searchBST(root.right, val)
        
    return root
