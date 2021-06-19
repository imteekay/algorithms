# https://www.hackerrank.com/challenges/counting-valleys/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup&h_r=next-challenge&h_v=zen

#!/bin/python3

import math
import os
import random
import re
import sys

def counting_valleys(steps, path):
    valleys_count, level = 0, 0
    
    for step in path:
        if step == 'U':
            level += 1
            
            if level == 0:
                valleys_count += 1
        else:
            level -= 1
            
    return valleys_count

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    steps = int(input().strip())
    path = input()
    result = counting_valleys(steps, path)
    fptr.write(str(result) + '\n')
    fptr.close()
