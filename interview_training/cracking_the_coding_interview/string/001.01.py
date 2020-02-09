'''
Is Unique: Implement an algorithm to determine if a string has all unique characters.
What if you cannot use additional data structures?

abc => True
aaa => False
abcdefghij => True
abcdefghia => False
'''


def all_unique_characters(string):
    characters_counter = {}

    for char in string:
        if char in characters_counter:
            characters_counter[char] += 1
        else:
            characters_counter[char] = 1

    for char, counter in characters_counter.items():
        if counter > 1:
            return False

    return True


print(all_unique_characters('abc'))
print(all_unique_characters('aaa'))
print(all_unique_characters('abcdefghij'))
print(all_unique_characters('abcdefghia'))
