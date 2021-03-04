# https://leetcode.com/problems/determine-if-string-halves-are-alike/


def halves_are_alike(s):
    vowels = {
        'a': True, 
        'e': True, 
        'i': True, 
        'o': True, 
        'u': True, 
        'A': True, 
        'E': True, 
        'I': True, 
        'O': True, 
        'U': True, 
    }
    
    
    middle_index = len(s) // 2
    a, b = s[:middle_index], s[middle_index:]
    a_counter, b_counter = 0, 0
    
    for char in a:
        if char in vowels:
            a_counter += 1
            
    for char in b:
        if char in vowels:
            b_counter += 1
            
    return a_counter == b_counter