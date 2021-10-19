# https://www.hackerrank.com/challenges/two-strings/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dictionaries-hashmaps&h_r=next-challenge&h_v=zen

#!/bin/python3

import math
import os
import random
import re
import sys

def two_strings(s1, s2):
    chars_presence = {}
    
    for char in s1:
        if char not in chars_presence:
            chars_presence[char] = True
    
    for char in s2:
        if char in chars_presence:
            return 'YES'
        
    return 'NO'

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    q = int(input().strip())

    for q_itr in range(q):
        s1 = input()
        s2 = input()
        result = two_strings(s1, s2)
        fptr.write(result + '\n')

    fptr.close()
