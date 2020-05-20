# https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number

'''
nums = [8,1,2,2,3]
[4,0,1,1,3]

nums = [6,5,4,8]
[2,1,0,3]
'''


'''
O(Nˆ2): Runtime / O(N): Space
'''


def smaller_numbers_than_current(nums):
    smaller_numbers_counters = []

    for num in nums:
        counter = 0

        for compared_num in nums:
            if compared_num < num:
                counter += 1

        smaller_numbers_counters.append(counter)

    return smaller_numbers_counters


'''
O(NlogN): Runtime / O(N): Space
'''


def smaller_numbers_than_current_2(nums):
    smaller_numbers_counters = {}

    for index, num in enumerate(sorted(nums)):
        if num not in smaller_numbers_counters:
            smaller_numbers_counters[num] = index

    return [smaller_numbers_counters[num] for num in nums]


data_tests = [
    ([8, 1, 2, 2, 3], [4, 0, 1, 1, 3]),
    ([6, 5, 4, 8], [2, 1, 0, 3])
]

for numbers, expected in data_tests:
    result = smaller_numbers_than_current(numbers)
    print(result, result == expected)

    result = smaller_numbers_than_current_2(numbers)
    print(result, result == expected)
