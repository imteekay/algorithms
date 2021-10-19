# https://www.hackerrank.com/challenges/sock-merchant/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup

#!/bin/python3

import math
import os
import random
import re
import sys

def sock_merchant(n, ar):
    counter = {}
    
    for num in ar:
        if num in counter:
            counter[num] += 1
        else:
            counter[num] = 1
            
    count = 0
    
    for _, num_count in counter.items():
        count += num_count // 2
        
    return count

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    n = int(input().strip())
    ar = list(map(int, input().rstrip().split()))
    result = sock_merchant(n, ar)
    fptr.write(str(result) + '\n')
    fptr.close()
