# https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

#!/bin/python3

import math
import os
import random
import re
import sys

def won_the_game(current, end_game):
    return current == end_game

def is_cumulus(cloud):
    return cloud == 0

def jumping_on_clouds(c):
    current, jumps, end_game = 0, 0, len(c) - 1
    
    while not won_the_game(current, end_game):
        if current + 2 <= end_game and is_cumulus(c[current + 2]):
            current += 2
        else:
            current += 1
            
        jumps += 1
    
    return jumps

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    n = int(input().strip())
    c = list(map(int, input().rstrip().split()))
    result = jumping_on_clouds(c)
    fptr.write(str(result) + '\n')
    fptr.close()
