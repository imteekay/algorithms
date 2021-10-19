"""
Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
"""


def found_sum_of_two_numbers_brute_force(k, numbers):
    for index_1 in range(len(numbers)):
        for index_2 in range(index_1, len(numbers)):
            if numbers[index_1] + numbers[index_2] == k:
                return True

    return False


def found_sum_of_two_numbers(k, numbers):
    start = 0
    end = len(numbers) - 1
    sorted_numbers = sorted(numbers)

    while start < end:
        if sorted_numbers[start] + sorted_numbers[end] == k:
            return True
        elif sorted_numbers[start] + sorted_numbers[end] > k:
            end -= 1
        else:
            start += 1

    return False


def test_algorithm(k, numbers):
    print('Brute force:', found_sum_of_two_numbers_brute_force(k, numbers))
    print('Optmized:', found_sum_of_two_numbers(k, numbers))
    print()


test_algorithm(17, [10, 15, 3, 7])
test_algorithm(17, [15, 10, 3, 7])
test_algorithm(17, [15, 10, 3, 8])
