# https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping

def alpha(num):
    return chr(int(num) + ord('a') - 1)

def freqAlphabets(s):
    result, index, s_length = [], 0, len(s)

    while index < s_length:
        if index + 2 < len(s) and s[index + 2] == '#':
            result.append(alpha(s[index:index+2]))
            index += 3
        else:
            result.append(alpha(s[index]))
            index += 1

    return ''.join(result)
