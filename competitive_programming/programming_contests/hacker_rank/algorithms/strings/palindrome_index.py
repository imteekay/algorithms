# https://www.hackerrank.com/challenges/palindrome-index

import sys

def is_palindrome(s):
    return s == s[::-1]

def palindrome_index(s):
    for i in range(len(s)):
        if is_palindrome(s[i+1:len(s)-i]):
            return i

        if is_palindrome(s[i:len(s)-i-1]):
            return len(s)-i-1

q = int(raw_input().strip())

for num in range(q):
    s = raw_input().strip()
    result = palindrome_index(s)
    print(result)
