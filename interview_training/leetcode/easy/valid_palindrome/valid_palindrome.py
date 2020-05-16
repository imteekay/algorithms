'''
Given a string, determine whether its palindrome if you are allowed to delete at most one character

Example
"aba" - True
"abca" - True
"abccadsfa" - False
"" - True

"abca" 0 => "bca"
"abca" 1 => "aca"
'''


def is_palindrome(string):
    return string == string[::-1]


def build_new_string_variation(string, index):
    return string[:index] + string[index+1:]


def is_at_most_palindrome(string):
    if string == '':
        return True

    if is_palindrome(string):
        return True

    for index in range(len(string)):
        new_string = build_new_string_variation(string, index)
        if is_palindrome(new_string):
            return True

    return False


data = [
    ("aba", True),
    ("abca", True),
    ("abccadsfa", False),
    ("", True)
]

for string, expected in data:
    result = is_at_most_palindrome(string)
    print(result == expected)
