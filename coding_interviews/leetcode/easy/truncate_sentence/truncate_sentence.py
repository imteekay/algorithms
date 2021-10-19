# https://leetcode.com/problems/truncate-sentence

def truncate_sentence(s, k):
    start_index, end_index, words = 0, 0, []

    for index, char in enumerate(s):
        end_index = index

        if char == ' ':
            words.append(s[start_index:end_index])
            start_index = index + 1
            
    words.append(s[start_index:])
    
    truncated_words = []
    
    for word in words[:k]:
        truncated_words.append(word)

    return ' '.join(truncated_words)

def truncate_sentence(s, k):
    start_index, end_index, words = 0, 0, []
        
    for index, char in enumerate(s):
        end_index = index

        if char == ' ':
            words.append(s[start_index:end_index])
            start_index = index + 1
            
    words.append(s[start_index:])
    
    return ' '.join(words[:k])

def truncate_sentence(s, k):
    return ' '.join(s.split(' ')[0:k])
