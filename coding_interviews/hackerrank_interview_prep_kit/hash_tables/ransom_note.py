# https://www.hackerrank.com/challenges/ctci-ransom-note/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dictionaries-hashmaps

#!/bin/python3

import math
import os
import random
import re
import sys

def build_word_counter(magazine):
    word_counter = {}
    
    for word in magazine:
        if word in word_counter:
            word_counter[word] += 1
        else:
            word_counter[word] = 1

    return word_counter

def check_notes_on_magazine(word_counter, note):
    for word in note:
        if word in word_counter and word_counter[word] > 0:
            word_counter[word] -= 1
        else:
            print('No')
            return
        
    print('Yes')

def check_magazine(magazine, note):
    word_counter = build_word_counter(magazine)
    check_notes_on_magazine(word_counter, note)

if __name__ == '__main__':
    first_multiple_input = input().rstrip().split()
    m = int(first_multiple_input[0])
    n = int(first_multiple_input[1])
    magazine = input().rstrip().split()
    note = input().rstrip().split()
    check_magazine(magazine, note)
