# https://leetcode.com/problems/jewels-and-stones/description/

# input: J = "aA" | S = "aAAbbbb"
# output: 3

# input: J = "z", S = "ZZ"
# output: 0

def num_jewels_in_stones(J, S):
    jewels = 0

    for j in J:
        for s in S:
            if s == j:
                jewels += 1

    return jewels

print(num_jewels_in_stones("aA", "aAAbbbb"))
print(num_jewels_in_stones("z", "ZZ"))
