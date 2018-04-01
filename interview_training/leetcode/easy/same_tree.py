# https://leetcode.com/problems/same-tree/description/

def is_same_tree(p, q):
    if (p and not q) or (not p and q):
        return False

    if not p and not q:
        return True

    return p.val == q.val and is_same_tree(p.left, q.left) and is_same_tree(p.right, q.right)

def is_same_tree(p, q):
    if p and q:
        return p.val == q.val and is_same_tree(p.left, q.left) and is_same_tree(p.right, q.right)

    return p is q
