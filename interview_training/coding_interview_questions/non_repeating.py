# 'aabcb' --> 'c'
# 'xxyz' --> 'y'
# '' --> None
# 'aabb' --> None
# 'abcab' --> 'c'
# 'abab' --> None
# 'aabbbc' --> 'c'
# 'aabbdbc' --> 'd'

def non_repeating(string):
    counter_mapping = {}

    for char in string:
        if char in counter_mapping:
            counter_mapping[char] += 1
        else:
            counter_mapping[char] = 1

    for char, counter in counter_mapping.items():
        if counter == 1:
            return char

    return None

print(non_repeating('aabcb'))
print(non_repeating('xxyz'))
print(non_repeating(''))
print(non_repeating('aabb'))
print(non_repeating("abcab"))
print(non_repeating("abab"))
print(non_repeating("aabbbc"))
print(non_repeating("aabbdbc"))
