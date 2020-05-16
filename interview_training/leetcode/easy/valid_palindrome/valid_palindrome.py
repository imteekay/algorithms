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

# Brute force


def is_palindrome(string):
    return string == string[::-1]


def build_new_string_variation(string, index):
    return string[:index] + string[index+1:]


def valid_palindrome(string):
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
    result = valid_palindrome(string)
    print(result == expected)


# Greedy Solution: find if it is not palindrome
def valid_palindrome_2(string):
    if string == '':
        return True

    if is_palindrome(string):
        return True

    for i in range(len(string) // 2):
        last_current_index = len(string) - 1 - i

        if string[i] != string[last_current_index]:
            string_shifted_to_left = string[i:last_current_index]
            string_shifted_to_right = string[i + 1:last_current_index + 1]
            return is_palindrome(string_shifted_to_left) or is_palindrome(string_shifted_to_right)

    return True


data = [
    ("aba", True),
    ("abc", False),
    ("abca", True),
    ("abccadsfa", False),
    ("", True)


]

for string, expected in data:
    result = valid_palindrome_2(string)
    print(result == expected)
