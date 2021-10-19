# https://leetcode.com/problems/maximum-number-of-balls-in-a-box

def get_box(ball):
    count = 0
    
    while ball > 0:
        count += ball % 10
        ball //= 10
        
    return count

def count_balls(low_limit, high_limit):
    hash_counter = {}
    
    for ball in range(low_limit, high_limit + 1):
        box = get_box(ball)
        
        if box in hash_counter:
            hash_counter[box] += 1
        else:
            hash_counter[box] = 1
            
    max_balls = float('-Inf')
    
    for key, value in hash_counter.items():
        max_balls = max(max_balls, value)
        
    return max_balls
