# https://leetcode.com/problems/single-number

def single_number(nums):
    counter = {}
    
    for num in nums:
        if num in counter:
            counter[num] += 1
        else:
            counter[num] = 1
            
    for num in nums:
        if counter[num] == 1: return num
