# https://leetcode.com/problems/shortest-distance-to-a-character

def shortest_to_char(s, c):
    all_c_indexes = []
    
    for index, char in enumerate(s):
        if char == c:
            all_c_indexes.append(index)
            
    answer = []
    
    for index, char in enumerate(s):
        if char == c:
            answer.append(0)
        else:
            answer_index = float('Inf')
            
            for c_index in all_c_indexes:
                answer_index = min(answer_index, abs(c_index - index))
            
            answer.append(answer_index)
            
    return answer

def shortest_to_char(s, c):
    