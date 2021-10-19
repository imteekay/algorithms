# https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses

def max_depth(s):
    depth = open_paren = 0
    
    for char in s:
        if char == '(':
            open_paren += 1
            depth = max(depth, open_paren)

        if char == ')':
            open_paren -= 1
            
    return depth
