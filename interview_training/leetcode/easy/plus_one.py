# https://leetcode.com/problems/plus-one/


def add_one(digits):
    return plus_one(digits, 1)


def plus_one(digits, inc):
    if digits == [] and inc > 0:
        return [1]

    if digits == [] and inc == 0:
        return []

    last_digit = digits[-1]
    last_digit = last_digit + inc

    if last_digit == 10:
        new_inc = 1
    else:
        new_inc = 0

    return plus_one(digits[0:-1], new_inc) + [last_digit % 10]


print(add_one([1, 2, 3]))  # [1, 2, 4]
print(add_one([4, 3, 2, 1]))  # [4, 3, 2, 2]
print(add_one([1, 2, 9]))  # [1, 3, 0]
print(add_one([1, 9, 9]))  # [2, 0, 0]
print(add_one([9, 9, 9]))  # [1, 0, 0, 0]
print(add_one([1, 0, 0, 0, 0]))  # [1, 0, 0, 0, 1]
