def factorial(n):
    if n <= 1: return 1
    return factorial(n - 1) * n

def permutation(n, r):
    return factorial(n) // (factorial(n - r) * factorial(r))

def number_of_good_pairs(nums):
    nums_counter = {}
    
    for num in nums:
        if num in nums_counter:
            nums_counter[num] += 1
        else:
            nums_counter[num] = 1
    
    counter = 0
    
    for num, num_counter in nums_counter.items():
        if num_counter > 1:
            counter += permutation(num_counter, 2)
            
    return counter

# ------------------------------------------------------------

from math import factorial

def permutation(n, r):
    return factorial(n) // (factorial(n - r) * factorial(r))

def number_of_good_pairs(nums):
    nums_counter = {}
    
    for num in nums:
        if num in nums_counter:
            nums_counter[num] += 1
        else:
            nums_counter[num] = 1
    
    counter = 0
    
    for num, num_counter in nums_counter.items():
        if num_counter > 1:
            counter += permutation(num_counter, 2)
            
    return counter

# ------------------------------------------------------------

def number_of_good_pairs(nums):
    nums_counter = {}
    counter = 0
    
    for num in nums:
        if num in nums_counter:
            counter += nums_counter[num]
            nums_counter[num] += 1
        else:
            nums_counter[num] = 1
            
    return counter

# ------------------------------------------------------------

from collections import Counter

def number_of_good_pairs(nums):
    nums_counter = Counter()
    counter = 0
    
    for num in nums:
        counter += nums_counter[num]
        nums_counter[num] += 1
            
    return counter
