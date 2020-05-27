# https://leetcode.com/problems/create-target-array-in-the-given-order/


def createTargetArray(nums, index):
    target = []

    for i in range(len(nums)):
        target.insert(index[i], nums[i])

    return target
