# https://leetcode.com/problems/find-and-replace-pattern

def find_and_replace_pattern(words, pattern):
    matchers = []
    
    for word in words:
        mapper = {}
        match = True
        used_pattern_letters = set()
        
        for index in range(len(word)):
            word_letter = word[index]
            pattern_letter = pattern[index]
            
            if word_letter in mapper and mapper[word_letter] != pattern_letter or (pattern_letter in used_pattern_letters and word_letter not in mapper):
                match = False
                break
            
            if word_letter not in mapper:
                used_pattern_letters.add(pattern_letter)
                mapper[word_letter] = pattern_letter
                
        if match: matchers.append(word)
    
    return matchers
