# https://leetcode.com/problems/check-if-word-equals-summation-of-two-words

alphabet = {
    'a': '0',
    'b': '1',
    'c': '2',
    'd': '3',
    'e': '4',
    'f': '5',
    'g': '6',
    'h': '7',
    'i': '8',
    'j': '9',
}

def get_numerical_value(word):
    list_of_chars = []
    
    for char in word:
        list_of_chars.append(alphabet[char])
        
    return int(''.join(list_of_chars))

def is_sum_equal(first_word, second_word, target_word):
    first_num = get_numerical_value(first_word)
    second_num = get_numerical_value(second_word)
    target_num = get_numerical_value(target_word)
    return first_num + second_num == target_num
