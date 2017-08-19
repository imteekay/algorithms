# https://leetcode.com/problems/palindrome-number/description/

def is_palindrome(x):
    if x < 0:
        return False

    s = ''

    while x > 0:
        s += str(x % 10)
        x /= 10

    return s == s[::-1]
