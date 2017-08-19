# https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

'''
- Examples:
[1, 1, 2] # => 2
[] # => 0
[1, 1, 1] # => 1
[1, 2, 3, 3, 4, 5] # => 5
'''

def remove_duplicates(nums):
    if not nums:
        return 0

    total_result = 1
    num = nums[0]

    for index in range(1, len(nums)):
        if nums[index] != num:
            nums[total_result] = nums[index]
            total_result += 1
            num = nums[index]

    return total_result

list1 = [1, 1, 2]
list2 = []
list3 = [1, 1, 1]
list4 = [1, 2, 3, 3, 4, 5]

print remove_duplicates(list1)
print remove_duplicates(list2)
print remove_duplicates(list3)
print remove_duplicates(list4)

print list1
print list2
print list3
print list4
