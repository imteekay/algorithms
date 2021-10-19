# https://leetcode.com/problems/fibonacci-number

def fib(n):
    cache = [0, 1]
    prev_1, prev_2 = 0, 1
    
    if n == 0: return 0
    if n == 1: return 1
    
    for _ in range(2, n + 1):
        cache.append(cache[prev_1] + cache[prev_2])
        prev_1 += 1
        prev_2 += 1
        
    return cache[-1]