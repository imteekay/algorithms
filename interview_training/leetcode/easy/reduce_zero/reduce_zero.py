# https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/


def reduce_number(num):
    if num % 2 == 0:
        return num / 2
    else:
        return num - 1


def number_of_steps(num):
    counter = 0

    while num:
        counter += 1
        num = reduce_number(num)

    return counter


data_tests = [
    (14, 6),
    (8, 4)
]

for number, expected in data_tests:
    result = number_of_steps(number)
    print(result, expected == result)
