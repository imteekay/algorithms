# https://leetcode.com/problems/contains-duplicate-ii

def contains_nearby_duplicate(nums, k):
    for index in range(len(nums)):
        for comp_index in range(len(nums)):
            if index != comp_index and nums[index] == nums[comp_index] and abs(comp_index - index) <= k:
                return True
    return False


def contains_nearby_duplicate(nums, k):
    index_mapper = {}

    for index, num in enumerate(nums):
        if num in index_mapper and index - index_mapper[num] <= k: return True
        index_mapper[num] = index

    return False