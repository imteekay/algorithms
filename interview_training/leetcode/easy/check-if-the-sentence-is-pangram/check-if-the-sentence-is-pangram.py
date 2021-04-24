# https://leetcode.com/problems/check-if-the-sentence-is-pangram

def check_if_pangram(sentence):
    if len(sentence) < 26: return False
        
    unique_chars = set()
    
    for char in sentence:
        unique_chars.add(char)
        
    return len(unique_chars) == 26

def check_if_pangram(sentence):
    return len(set(sentence)) == 26
