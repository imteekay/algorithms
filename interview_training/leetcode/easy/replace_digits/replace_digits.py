# https://leetcode.com/problems/replace-all-digits-with-characters

def replace_digits(s):
    replaced_string = []
    
    for index in range(len(s)):
        if index % 2 == 0:
            replaced_string.append(s[index])
        else:
            replaced_string.append(shift(s[index-1], s[index]))
            
    return ''.join(replaced_string)
            
def shift(char, digit):
    return chr(ord(char) + int(digit))
