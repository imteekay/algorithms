# https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer

'''
Given an integer number n, return the difference between the product of its
digits and the sum of its digits.

Input: n = 234
Output: 15

Input: n = 4421
Output: 21
'''


def subtract_product_and_sum(num):
    multiplications = 1
    additions = 0

    for digit in str(num):
        multiplications *= int(digit)
        additions += int(digit)

    return multiplications - additions


data_tests = [
    (234, 15),
    (4421, 21)
]


for num, expected in data_tests:
    result = subtract_product_and_sum(num)
    print(result, result == expected)
