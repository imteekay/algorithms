# https://leetcode.com/problems/reverse-integer/

def reverse(x):
    number_list = []

    if x < 0:
        negative = True
        x *= -1
    else:
        negative = False

    while x > 0:
        number_list.append(x % 10)
        x /= 10

    result_number = 0

    for index, n in enumerate(number_list):
        result_number += n * pow(10, len(number_list) - 1 - index)

    if negative:
        result_number *= -1

    if (result_number < 2147483648*-1 or result_number > 2147483647):
        return 0

    return result_number
