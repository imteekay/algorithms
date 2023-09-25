'''
One Away: There are three types of edits that can be performed on strings:
insert a character, remove a character, or replace a character.
Given two strings, write a function to check if they are one edit (or zero edits) away.

Example:

pale, ple -> true
pales, pale -> true
pale, bale -> true
pale, bake -> false
bla, bleble -> false
'''


def is_two_chars_away(str1, str2):
    return (len(str1) - len(str2) >= 2) or (len(str2) - len(str1) >= 2)


def number_of_needed_changes(bigger_str, smaller_str):
    str_counter = {}

    for char in bigger_str:
        if char in str_counter:
            str_counter[char] += 1
        else:
            str_counter[char] = 1

    for char in smaller_str:
        if char in str_counter:
            str_counter[char] -= 1

    needed_changes = 0

    for char, counter in str_counter.items():
        needed_changes += counter

    return needed_changes


def one_away(str1, str2):
    if is_two_chars_away(str1, str2):
        return False

    needed_changes = 0

    if len(str1) >= len(str2):
        needed_changes = number_of_needed_changes(str1, str2)
    else:
        needed_changes = number_of_needed_changes(str2, str1)

    return needed_changes <= 1


data = [
    ('pale', 'ple', True),
    ('pales', 'pale', True),
    ('pale', 'bale', True),
    ('paleabc', 'pleabc', True),
    ('pale', 'ble', False),
    ('a', 'b', True),
    ('', 'd', True),
    ('d', 'de', True),
    ('pale', 'pale', True),
    ('pale', 'ple', True),
    ('ple', 'pale', True),
    ('pale', 'bale', True),
    ('pale', 'bake', False),
    ('pale', 'pse', False),
    ('ples', 'pales', True),
    ('pale', 'pas', False),
    ('pas', 'pale', False),
    ('pale', 'pkle', True),
    ('pkle', 'pable', False),
    ('pal', 'palks', False),
    ('palks', 'pal', False),
    ('bla', 'bleble', False)
]

for [test_s1, test_s2, expected] in data:
    actual = one_away(test_s1, test_s2)
    print(actual == expected)
