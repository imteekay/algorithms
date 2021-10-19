# https://leetcode.com/problems/build-an-array-with-stack-operations

def build_array(target, n):
    hash = {}
    
    for num in target:
        hash[num] = True
    
    result = []
    
    for num in range(1, n + 1):
        if len(hash) == 0: break
            
        result.append('Push')
        
        if num in hash: del hash[num]
        else: result.append('Pop')
            
    return result

def build_array(target, n):
    s = set(target)
    result = []

    for index in range(1, target[-1] + 1):
        result.append('Push')
        if index not in s: result.append('Pop')
            
    return result
