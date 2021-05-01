# https://leetcode.com/problems/delete-columns-to-make-sorted

def min_deletion_size(strs):
    counter = 0

    for col in range(len(strs[0])):
        column = []
        
        for row in range(len(strs)):
            column.append(strs[row][col])

        if column != sorted(column): counter += 1
            
    return counter
