# https://www.hackerrank.com/challenges/repeated-string/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

#!/bin/python3

import math
import os
import random
import re
import sys

#
# aba => 2
# n = 10
# abaabaabaa => 7
# 10 / len(s) => 3
# 10 % len(s) => 1
# 2 * 3 + 1

def repeatedString(s, n):
    count_as = 0
    
    for char in s:
        if char == 'a':
            count_as += 1
    
    times = n // len(s)
    remaining = n % len(s)
    
    count_as = count_as * times
    
    for index in range(0, remaining):
        if s[index] == 'a':
            count_as += 1
            
    return count_as

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    s = input()
    n = int(input().strip())
    result = repeatedString(s, n)
    fptr.write(str(result) + '\n')
    fptr.close()
