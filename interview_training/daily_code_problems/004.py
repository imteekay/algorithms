'''
Given an array of integers, find the first missing positive integer in linear time and constant space.
In other words, find the lowest positive integer that does not exist in the array.
The array can contain duplicates and negative numbers as well.

For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3.

You can modify the input array in-place.
'''

# using a hash table: linear time and linear space


def get_lowest(lowest, present_numbers):
    while lowest in present_numbers:
        lowest += 1

    return lowest


def lowest_positive_integer(numbers):
    present_numbers = {}
    lowest = 1

    for number in numbers:
        present_numbers[number] = True

    return get_lowest(lowest, present_numbers)


result = lowest_positive_integer([3, 4, -1, 1])
print(result)

result = lowest_positive_integer([3, 4, 2, -1, 1])
print(result)

result = lowest_positive_integer([5, 4, 2, -1, 1])
print(result)
