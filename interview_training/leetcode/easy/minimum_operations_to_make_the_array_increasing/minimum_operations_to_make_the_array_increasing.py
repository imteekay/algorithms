# https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing

def min_operations(nums):
    previous_num = nums[0]
    operations = 0

    for index, num in enumerate(nums[1:]):
        if num <= previous_num:
            new_num = previous_num - num + 1
            operations += new_num
            nums[index + 1] += new_num

        previous_num = nums[index + 1]
        
    return operations
