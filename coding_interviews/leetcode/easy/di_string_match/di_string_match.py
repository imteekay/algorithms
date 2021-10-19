# https://leetcode.com/problems/di-string-match

def di_string_match(S):
    permutation, top, bottom = [], len(S), 0

    for char in S:
        if char == 'I':
            permutation.append(bottom)
            bottom += 1
        else:
            permutation.append(top)
            top -= 1
            
    permutation.append(top)
    return permutation
