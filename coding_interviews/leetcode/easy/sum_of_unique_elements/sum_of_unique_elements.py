# https://leetcode.com/problems/sum-of-unique-elements


def sum_of_unique(nums):
    mapper = {}
    
    for num in nums:
        if num in mapper:
            mapper[num] += 1
        else:
            mapper[num] = 1
            
    sum_of_unique_nums = 0
            
    for key in mapper:
        if mapper[key] == 1:
            sum_of_unique_nums += key
            
    return sum_of_unique_nums