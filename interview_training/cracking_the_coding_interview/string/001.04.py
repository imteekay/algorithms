'''
Palindrome Permutation: Given a string, write a function to check if it is a permutation of a palindrome.
A palindrome is a word or phrase that is the same forwards and backwards. A permutation
is a rearrangement of letters. The palindrome does not need to be limited to just dictionary words.

Example
Input: Tact Coa
Output: True (permutations: "taco cat", "atco eta", etc.)
'''


def is_even(number):
    return number % 2 == 0


def is_even_length(string):
    return is_even(len(string))


def is_palindrome_permutation(string):
    string = string.lower()
    string = "".join(string.split())
    even = is_even_length(string)

    char_counter = {}
    odd = 0

    for char in string:
        if char in char_counter:
            char_counter[char] += 1
        else:
            char_counter[char] = 1

    for char, counter in char_counter.items():
        if not is_even(counter):
            odd += 1

    return (even and odd == 0) or (not even and not is_even(odd))


result = is_palindrome_permutation('Tact Coa')
print(result)  # True

result = is_palindrome_permutation('Tac Coa')
print(result)  # False

result = is_palindrome_permutation('Tac Tac')
print(result)  # True

data = [
    ('Tact Coa', True),
    ('Tac Coa', False),
    ('Tac Tac', True)
]

for [string, expected] in data:
    actual = is_palindrome_permutation(string)
    print(actual == expected)
