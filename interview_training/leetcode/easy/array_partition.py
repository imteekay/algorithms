'''
https://leetcode.com/problems/array-partition-i/description/

Input: [1,4,3,2]
Output: 4
'''

def array_pair_sum(nums):
    nums.sort()
    return sum(nums[i] for i in range(0, len(nums), 2))
