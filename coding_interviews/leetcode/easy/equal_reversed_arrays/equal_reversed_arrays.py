# https://leetcode.com/problems/make-two-arrays-equal-by-reversing-sub-arrays

'''
Given two integer arrays of equal length target and arr.
In one step, you can select any non-empty sub-array of arr and reverse it.
You are allowed to make any number of steps.

Return True if you can make arr equal to target, or False otherwise.

Input: target = [1,2,3,4], arr = [2,4,1,3]
Output: true

Input: target = [7], arr = [7]
Output: true

Input: target = [1,12], arr = [12,1]
Output: true
'''

# 0(nlogn)


def can_be_equal(target, arr):
    return target == arr or sorted(target) == sorted(arr)


# 0(n)

def can_be_equal(target, arr):
    counter = {}

    for index in range(len(target)):
        target_item, arr_item = target[index], arr[index]

        if target_item in counter:
            counter[target_item] += 1
        else:
            counter[target_item] = 1

        if arr_item in counter:
            counter[arr_item] += 1
        else:
            counter[arr_item] = 1

    for _, value in counter.items():
        if value % 2 != 0:
            return False

    return True


def can_be_equal(target, arr):
    return collections.Counter(target) == collections.Counter(arr)
