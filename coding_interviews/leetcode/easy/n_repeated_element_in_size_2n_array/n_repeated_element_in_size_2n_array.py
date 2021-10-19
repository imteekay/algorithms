# https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

'''
In a array A of size 2N, there are N+1 unique elements,
and exactly one of these elements is repeated N times.

Return the element repeated N times.

Example 1:
Input: [1,2,3,3]
Output: 3

Example 2:
Input: [2,1,2,5,3,2]
Output: 2

Example 3:
Input: [5,1,5,2,5,3,5,4]
Output: 5
'''


def n_repeated_element_in_size_2n_array(A):
    map_counter = {}

    for number in A:
        if number in map_counter:
            map_counter[number] += 1
            return number
        else:
            map_counter[number] = 1


data_tests = [
    ([1, 2, 3, 3], 3),
    ([2, 1, 2, 5, 3, 2], 2),
    ([5, 1, 5, 2, 5, 3, 5, 4], 5)
]

for numbers, expected in data_tests:
    result = n_repeated_element_in_size_2n_array(numbers)
    print(result, expected == result)
