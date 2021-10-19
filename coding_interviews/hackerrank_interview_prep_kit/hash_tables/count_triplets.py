# https://www.hackerrank.com/challenges/count-triplets-1/problem?h_l=interview&h_r=next-challenge&h_r%5B%5D%5B%5D%5B%5D=next-challenge&h_r%5B%5D%5B%5D%5B%5D=next-challenge&h_v=zen&h_v%5B%5D%5B%5D%5B%5D=zen&h_v%5B%5D%5B%5D%5B%5D=zen&isFullScreen=true&playlist_slugs%5B%5D%5B%5D%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D%5B%5D%5B%5D=dictionaries-hashmaps

#!/bin/python3

import math
import os
import random
import re
import sys

from collections import Counter

def count_triplets(arr, r):
    number_counter = Counter(arr)
    prev_counter = Counter()
    triplets = 0

    for number in arr:
        prev = number // r
        next_num = number * r
        number_counter[number] -= 1

        if prev_counter[prev] and number_counter[next_num] and number % r == 0:
            triplets += prev_counter[prev] * number_counter[next_num]

        prev_counter[number] += 1

    return triplets

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    nr = input().rstrip().split()
    n = int(nr[0])
    r = int(nr[1])
    arr = list(map(int, input().rstrip().split()))
    ans = count_triplets(arr, r)
    fptr.write(str(ans) + '\n')
    fptr.close()
