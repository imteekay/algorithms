# https://leetcode.com/problems/search-a-2d-matrix-ii

'''
Runtime Complexity: O(NlogM), where N is the number of rows and M is the number of columns
Space Complexity: O(1)
'''

def search_matrix(matrix, target):
    for row in matrix:
        if target_in_row(row, target):
            return True
        
    return False

def target_in_row(array, target):
    start, end = 0, len(array) - 1
    
    while start <= end:
        middle = (start + end) // 2
        number = array[middle]
        
        if number == target:
            return True
        
        if number > target:
            end = middle - 1
        else:
            start = middle + 1
            
    return False