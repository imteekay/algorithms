# https://leetcode.com/problems/intersection-of-two-arrays-ii


def intersection(nums1, nums2):
    hash_map = {}

    for num in nums1:
        if num in hash_map:
            hash_map[num] += 1
        else:
            hash_map[num] = 1

    nums = []

    for num in nums2:
        if num in hash_map and hash_map[num]:
            nums.append(num)
            hash_map[num] -= 1

    return nums