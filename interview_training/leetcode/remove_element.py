# https://leetcode.com/problems/remove-element/description/

'''
nums = [3, 2, 2, 3], val = 3 # => 2
nums = [3, 2, 2, 3], val = 2 # => 2
nums = [1, 2, 2, 4], val = 3 # => 4
nums = [], val = 3 # => 0
'''

def remove_element(nums, val):
    while val in nums:
        nums.remove(val)

    return len(nums)
