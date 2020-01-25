"""
Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
"""


def found_sum_of_two_numbers(k, l):
    start, end = 0, len(l) - 1
    found = False

    while start < end:
        if l[start] + l[end] == k:
            found = True
            break
        elif l[start] + l[end] > k:
            end -= 1
        else:
            start += 1

    return found


print(found_sum_of_two_numbers(17, [3, 7, 10, 15]))
