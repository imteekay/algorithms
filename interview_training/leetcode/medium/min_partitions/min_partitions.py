# https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers

def min_partitions(n):
    count = '0'

    for digit_char in n:
        if digit_char > count:
            count = digit_char

    return int(count)

def min_partitions(n):
    return int(max(n))
