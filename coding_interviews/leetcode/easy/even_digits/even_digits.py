# https://leetcode.com/problems/find-numbers-with-even-number-of-digits/


def find_numbers(nums):
    counter = 0

    for num in nums:
        if len(str(num)) % 2 == 0:
            counter += 1

    return counter
