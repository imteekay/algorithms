# https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence


def can_make_arithmetic_progression(arr):
    sorted_arr, diff = sorted(arr), '-Inf'

    for index in range(len(sorted_arr) - 1):
        if diff == '-Inf':
            diff = sorted_arr[index + 1] - sorted_arr[index]

        if sorted_arr[index + 1] - sorted_arr[index] != diff:
            return False

    return True
