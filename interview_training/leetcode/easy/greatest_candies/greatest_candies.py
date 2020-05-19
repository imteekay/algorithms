'''
[2, 3, 3, 1, 3] 2
[True, True, True, True, True]
'''


def kids_with_candies(candies, extra_candies):
    greatest = get_greatest(candies)
    return map_can_be_greatest(candies, extra_candies, greatest)


def map_can_be_greatest(candies, extra_candies, greatest_candy):
    greatest_possibilities = []

    for candy in candies:
        greatest_possibilities.append(candy + extra_candies >= greatest_candy)

    return greatest_possibilities


def get_greatest(candies):
    greatest = candies[0]

    for candy in candies:
        if candy > greatest:
            greatest = candy

    return greatest


data_tests = [
    ([2, 3, 3, 1, 3], 2, [True, True, True, True, True]),
    ([4, 2, 1, 1, 2], 1, [True, False, False, False, False]),
    ([12, 1, 12], 10, [True, False, True]),
]

for candies, extra_candies, expected in data_tests:
    result = kids_with_candies(candies, extra_candies)
    print(result, result == expected)
