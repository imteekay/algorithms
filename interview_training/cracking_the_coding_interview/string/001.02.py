'''
Check Permutation: Given two strings, write a method to decide if one is a
permutation of the other.

- Examples:
"abc" "bca" => True
"abc" "bca" => True
"abc" "aab" => False
"abc" "baca" => False

Questions:
- Do the strings have the same length?
'''


def permutation(str1, str2):
    if len(str1) != len(str2):
        return False

    return sorted(str1) == sorted(str2)


print(permutation("abc", "bca"))
print(permutation("abc", "bca"))
print(permutation("abc", "aab"))
print(permutation("abc", "baca"))

'''
This is:
- Space: O(1) (no new storage of the string)
- Time: O(NlogN) (because of the sorting)
'''


def permutation(str1, str2):
    if len(str1) != len(str2):
        return False

    first_set = set()
    second_set = set()

    for char in str1:
        first_set.add(char)

    for char in str2:
        second_set.add(char)

    return first_set == second_set


print(permutation("abc", "bca"))
print(permutation("abc", "bca"))
print(permutation("abc", "aab"))
print(permutation("abc", "baca"))

'''
This is:
- Space: O(N) (for each string we have a new set with N places - N is equal to the string length)
- Time: O(N) (just the str1 and str2 iteration)
'''


def permutation(str1, str2):
    if len(str1) != len(str2):
        return False

    characters = {}

    for char in str1:
        if char in characters:
            characters[char] += 1
        else:
            characters[char] = 1

    for char in str2:
        if char not in characters or characters[char] == 0:
            return False

        characters[char] -= 1

    return True


print(permutation("abc", "bca"))
print(permutation("abc", "bca"))
print(permutation("abc", "aab"))
print(permutation("abc", "baca"))

'''
This is:
- Space: O(N) (new dictionary for the first string with N places - N is equal to the string length)
- Time: O(N) (just the str1 and str2 iteration)
'''
