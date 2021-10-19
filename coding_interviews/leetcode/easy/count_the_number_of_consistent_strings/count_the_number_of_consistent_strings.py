# https://leetcode.com/problems/count-the-number-of-consistent-strings

'''
Time complexity: O(WN), where W = number of words and N = number of character of the longest string
Space complexity: O(N)
'''

def count_consistent_strings(allowed, words):
    allowed_mapper = {}
    
    for char in allowed:
        allowed_mapper[char] = True
        
    counter = 0
    
    for word in words:
        all_chars_allowed = True
        
        for char in word:
            if char not in allowed_mapper:
                all_chars_allowed = False
                break
        
        if all_chars_allowed:
            counter += 1
            
    return counter

'''
Time complexity: O(WNA), where W = number of words and N = number of character of the longest string, and A = length of the allowed string
Space complexity: O(1)
'''

def count_consistent_strings(allowed, words):
    counter = 0

    for word in words:
        counter += 1

        for char in word:
            if char not in allowed:
                counter -= 1
                break

    return counter
