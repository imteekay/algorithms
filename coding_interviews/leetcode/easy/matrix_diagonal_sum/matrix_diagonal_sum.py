# https://leetcode.com/problems/matrix-diagonal-sum

'''
Time Complexity: O(N)
Space Complexity: O(1)
'''

def diagonal_sum(mat):
    diagonals_sum, mat_length = 0, len(mat)
    
    # left-top --> right-bottom & right-top --> left-bottom
    for index in range(mat_length):
        diagonals_sum += mat[index][index] + mat[index][mat_length-index-1]
        
    if len(mat) % 2 == 0:
        return diagonals_sum
    
    center = mat_length // 2
    return diagonals_sum - mat[center][center]]
