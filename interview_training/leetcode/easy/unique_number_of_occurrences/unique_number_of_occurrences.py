# https://leetcode.com/problems/unique-number-of-occurrences

def unique_occurrences(arr):
    num_to_occurrences = {}
    
    for num in arr:
        if num in num_to_occurrences:
            num_to_occurrences[num] += 1
        else:
            num_to_occurrences[num] = 1
            
    occurrences_arr = []
    occurrences_set = set()
    
    for occurrence in num_to_occurrences.values():
        occurrences_arr.append(occurrence)
        occurrences_set.add(occurrence)
        
    return len(occurrences_arr) == len(occurrences_set)
