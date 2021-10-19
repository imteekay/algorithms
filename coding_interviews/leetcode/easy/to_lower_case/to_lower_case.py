# https://leetcode.com/problems/to-lower-case/

'''
Implement function ToLowerCase() that has a string parameter str,
and returns the same string in lowercase.

Example 1:
Input: "Hello"
Output: "hello"

Example 2:
Input: "here"
Output: "here"

Example 3:
Input: "LOVELY"
Output: "lovely"
'''


def lower_case_char(char):
    if ord(char) >= 65 and ord(char) <= 90:
        return chr(ord(char) + 32)

    return char


def lower_case(str):
    list_of_chars = []

    for char in str:
        list_of_chars.append(lower_case_char(char))

    return ''.join(list_of_chars)


data_tests = [
    ('Hello', 'hello'),
    ('here', 'here'),
    ('LOVELY', 'lovely'),
    ('al&phaBET', 'al&phabet')
]

for string, expected in data_tests:
    result = lower_case(string)
    print(result, expected == result)
