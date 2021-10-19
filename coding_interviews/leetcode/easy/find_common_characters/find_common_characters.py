# https://leetcode.com/problems/find-common-characters

def common_chars(A):
    if len(A) == 1: return [char for char in A]

    word = A[0]
    words = A[1:]
    result = []

    for char in word:
        all = True
        
        for index, other_word in enumerate(words):
            if char in other_word:
                other_word_index = other_word.index(char)
                words[index] = words[index][:other_word_index] + words[index][other_word_index+1:]
            else:
                all = False
                break
                
        if all: result.append(char)
            
    return result

