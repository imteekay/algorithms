# https://leetcode.com/problems/reduce-array-size-to-the-half

'''
Time Complexity: O(NlogN)
Space Complexity: O(N)
'''

def min_set_size(arr):
    num_to_count, counts, min_size, current_length = {}, [], 0, len(arr)
    
    for num in arr:
        if num in num_to_count:
            num_to_count[num] += 1
        else:
            num_to_count[num] = 1
        
    for num in num_to_count:
        counts.append(num_to_count[num])
        
    counts = reversed(sorted(counts))
    
    if len(arr) % 2 == 0:
        cut = len(arr) / 2
    else:
        cut = len(arr + 1) / 2
        
    for count in counts:
        min_size += 1
        current_length -= count
        
        if current_length <= cut:
            return min_size
        
    return min_size
