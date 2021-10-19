# https://leetcode.com/problems/merge-strings-alternately/

def mergeAlternately(word1, word2):
    smallest_length = min(len(word1), len(word2))
    letters = []

    for index in range(smallest_length):
        letters.append(word1[index])
        letters.append(word2[index])

    if len(word1) > len(word2):
        biggest_word = word1
    else:
        biggest_word = word2
        
    return ''.join(letters) + biggest_word[smallest_length:]
