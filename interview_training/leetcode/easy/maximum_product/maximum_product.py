# https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array


def max_product(nums):
    sorted_list = sorted(nums)
    return (sorted_list[-1] - 1) * (sorted_list[-2] - 1)


def max_product(nums):
    max, second_max = 0, 0

    for num in nums:
        if num >= max:
            second_max = max
            max = num
        elif num >= second_max:
            second_max = num

    return (max - 1) * (second_max - 1)
