# https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square

'''
Time Complexity: O(N)
Space Complexity: O(N)
'''

def count_good_rectangles(rectangles):
    max_len, all_max_lens = 0, []
    
    for rec in rectangles:
        square_len = min(rec[0], rec[1])
        max_len = max(max_len, square_len)
        all_max_lens.append(square_len)
        
    counter = 0

    for length in all_max_lens:
        if length == max_len:
            counter += 1
            
    return counter


def count_good_rectangles_optimized(rectangles):
    max_len, counter = 0, 0
        
    for rec in rectangles:
        square_len = min(rec[0], rec[1])
        
        if square_len > max_len:
            max_len = square_len
            counter = 0
            
        if square_len == max_len:                
            counter += 1

    return counter