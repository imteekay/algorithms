# https://leetcode.com/problems/decompress-run-length-encoded-list

'''
We are given a list nums of integers representing a list compressed with run-length encoding.

Consider each adjacent pair of elements [freq, val] = [nums[2*i], nums[2*i+1]] (with i >= 0).  For each such pair, there are freq elements with value val concatenated in a sublist. Concatenate all the sublists from left to right to generate the decompressed list.

Return the decompressed list.

Input: nums = [1,2,3,4]
Output: [2,4,4,4]

Input: nums = [1,1,2,3]
Output: [1,3,3]
'''


def build_frequencies(frequency, num):
    return [num for i in range(frequency)]


def decompress_list(nums):
    result_list = []

    for index in range(0, len(nums), 2):
        result_list += build_frequencies(nums[index], nums[index+1])

    return result_list


data_tests = [
    ([1, 2, 3, 4], [2, 4, 4, 4]),
    ([1, 1, 2, 3], [1, 3, 3])
]


for nums, expected in data_tests:
    result = decompress_list(nums)
    print(result, result == expected)
