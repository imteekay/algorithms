# https://leetcode.com/problems/minimize-maximum-pair-sum-in-array

def min_pair_sum(nums):
    sorted_nums = sorted(nums)
    maximum_pair_sum = float('-Inf')
    
    for i in range(len(nums) // 2):
        pair_sum = sorted_nums[i] + sorted_nums[len(sorted_nums) - i - 1]
        maximum_pair_sum = max(maximum_pair_sum, pair_sum)
        
    return maximum_pair_sum
