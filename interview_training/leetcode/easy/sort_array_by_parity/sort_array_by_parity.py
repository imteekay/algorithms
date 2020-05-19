# https://leetcode.com/problems/sort-array-by-parity/submissions/

'''
Given an array A of non-negative integers,
return an array consisting of all the even elements of A,
followed by all the odd elements of A.

You may return any answer array that satisfies this condition.

Example:
Input: [3,1,2,4]
Output: [2,4,3,1]
'''


def sort_array_by_parity(A):
    even_numbers = []
    odd_numbers = []

    for number in A:
        if number % 2 == 0:
            even_numbers.append(number)
        else:
            odd_numbers.append(number)

    return even_numbers + odd_numbers


data_tests = [
    ([1, 2, 3, 4], [2, 4, 1, 3]),
    ([3, 1, 2, 4], [2, 4, 3, 1]),
]

for numbers, expected in data_tests:
    result = sort_array_by_parity(numbers)
    print(result, result == expected)
