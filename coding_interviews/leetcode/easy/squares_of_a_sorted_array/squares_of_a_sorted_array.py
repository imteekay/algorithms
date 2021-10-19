# https://leetcode.com/problems/squares-of-a-sorted-array

'''
Given an array of integers A sorted in non-decreasing order,
return an array of the squares of each number, also in sorted non-decreasing order.

Example 1:
Input: [-4,-1,0,3,10]
Output: [0,1,9,16,100]

Example 2:
Input: [-7,-3,2,3,11]
Output: [4,9,9,49,121]
'''


def squares_of_a_sorted_array(A):
    new_array = []

    for number in A:
        new_array.append(number * number)

    return sorted(new_array)


def squares_of_a_sorted_array_in_place(A):
    for index in range(len(A)):
        A[index] = A[index] * A[index]

    return sorted(A)


data_tests = [
    ([-4, -1, 0, 3, 10], [0, 1, 9, 16, 100]),
    ([-7, -3, 2, 3, 11], [4, 9, 9, 49, 121])
]

for numbers, expected in data_tests:
    result = squares_of_a_sorted_array(numbers)
    print(result, result == expected)

    result = squares_of_a_sorted_array_in_place(numbers)
    print(result, result == expected)
