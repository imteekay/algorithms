# https://leetcode.com/problems/intersection-of-two-arrays/


def intersection(nums1, nums2):
    intersect_set = set()
    
    for num1 in nums1:
        for num2 in nums2:
            if num1 == num2:
                intersect_set.add(num1)
                
    return intersect_set

def intersection(nums1, nums2):
    return set(nums1).intersection(nums2)


def intersection(nums1, nums2):
    nums_mapper = {}

    for num in nums1:
        nums_mapper[num] = True

    nums = set()

    for num in nums2:
        if num in nums_mapper:
            nums.add(num)

    return nums