# https://leetcode.com/problems/split-a-string-in-balanced-strings/


def balanced_string_split(s):
    els = 0
    ares = 0
    max = 0

    for char in s:
        if char == 'L':
            els += 1
        else:
            ares += 1

        if els == ares:
            max += 1
            els = 0
            ares = 0

    return max
