'''
https://leetcode.com/problems/reverse-vowels-of-a-string/description/

input: "hello"
output: "holle"

input: "leetcode"
output: "leotcede"
'''

def vowel(char):
    return char in ['a', 'e', 'i', 'o', 'u']

def reverse_vowels(s):
    vowels = [char for char in s if vowel(char)]
    index = len(vowels) - 1
    result = ''

    for char in s:
        if vowel(char):
            result += vowels[index]
            index -= 1
        else:
            result += char

    return result



print(reverse_vowels('hello') == 'holle')
print(reverse_vowels('leetcode') == 'leotcede')
