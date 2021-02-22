# https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/

def min_operations(boxes):
    answer = []
    
    for index in range(len(boxes)):
        counter = 0
        for box_index in range(len(boxes)):
            if index != box_index and boxes[box_index] == '1':
                counter += abs(index - box_index)
                
        answer.append(counter)
        
    return answer
