# https://leetcode.com/problems/unique-number-of-occurrences

def unique_occurrences(arr):
    num_to_occurrences = {}
    
    for num in arr:
        if num in num_to_occurrences:
            num_to_occurrences[num] += 1
        else:
            num_to_occurrences[num] = 1

    return len(num_to_occurrences) == len(set(num_to_occurrences.values()))

from collections import Counter

def unique_occurrences_2(arr):
    num_to_occurrences = Counter(arr)
    return len(num_to_occurrences) == len(set(num_to_occurrences.values()))
