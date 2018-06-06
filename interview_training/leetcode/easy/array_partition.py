'''
https://leetcode.com/problems/array-partition-i/description/

Input: [1,4,3,2]
Output: 4
'''

def array_pair_sum(nums):
    return sum(sorted(nums)[::2])

print(array_pair_sum([1, 4, 3, 2]))
