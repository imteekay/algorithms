# https://leetcode.com/problems/jewels-and-stones/description/

# input: J = "aA" | S = "aAAbbbb"
# output: 3

# input: J = "z", S = "ZZ"
# output: 0

# Solution: O(N^2)


def num_jewels_in_stones(J, S):
    jewels = 0

    for j in J:
        for s in S:
            if s == j:
                jewels += 1

    return jewels


print(num_jewels_in_stones("aA", "aAAbbbb"))
print(num_jewels_in_stones("z", "ZZ"))

# Solution: O(N)


def num_jewels_in_stones_opt(J, S):
    number_by_chars = {}
    counter = 0

    for char in J:
        if char in number_by_chars:
            number_by_chars[char] += 1
        else:
            number_by_chars[char] = 1

    for char in S:
        if char in number_by_chars:
            counter += number_by_chars[char]

    return counter


print(num_jewels_in_stones_opt("aA", "aAAbbbb"))
print(num_jewels_in_stones_opt("z", "ZZ"))
