# https://leetcode.com/problems/search-a-2d-matrix

'''
Runtime Complexity: O(logNM)
Space Complexity: O(1)
'''

def search_matrix(matrix, target):
    rows, columns = len(matrix), len(matrix[0])
    start, end = 0, rows * columns - 1

    while start <= end:
        middle = (start + end) // 2
        number = matrix[middle // columns][middle % columns]
        
        if number == target:
            return True
        
        if target < number:
            end = middle - 1
        else:
            start = middle + 1
            
    return False
