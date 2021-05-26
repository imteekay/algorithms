# https://leetcode.com/problems/sorting-the-sentence

def sort_sentence(s):
    words = s.split()
    index_to_word = {}

    for word in words:
        index = int(word[-1])
        actual_word = word[:len(word) - 1]
        index_to_word[index] = actual_word
        
    sentence = []
    
    for index in range(1, len(words) + 1):
        sentence.append(index_to_word[index])
        
    return ' '.join(sentence)
