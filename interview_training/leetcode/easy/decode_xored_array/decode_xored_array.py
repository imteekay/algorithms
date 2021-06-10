# https://leetcode.com/problems/decode-xored-array

def decode(encoded, first):
    original = [first]
    
    for num in encoded:
        original.append(original[-1] ^ num)
        
    return original
