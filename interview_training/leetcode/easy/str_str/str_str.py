'''
https://leetcode.com/problems/implement-strstr
Implement strStr().

Return the index of the first occurrence of needle in haystack,
or -1 if needle is not part of haystack.

- Example 1:

Input: haystack = "hello", needle = "ll"
Output: 2

- Example 2:

Input: haystack = "aaaaa", needle = "bba"
Output: -1
'''


def strStr(haystack, needle):
    if needle == '':
        return 0

    neddle_length = len(needle)

    for index in range(len(haystack) - neddle_length + 1):
        if haystack[index:index+neddle_length] == needle:
            return index

    return -1


test_data = [
    ("hello", "ll", 2),
    ("aaaaa", "bba", -1),
    ("other", "", 0),
]

for haystack, needle, expected in test_data:
    result = strStr(haystack, needle)
    print('result as expected?', result == expected)
