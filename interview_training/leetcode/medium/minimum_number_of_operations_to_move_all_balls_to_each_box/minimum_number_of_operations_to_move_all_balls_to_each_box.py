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

def sum_moves(answer, boxes, boxes_indices):
    moves, number_of_balls_seen = 0, 0
    
    for index in boxes_indices:
        answer[index] += moves

        if boxes[index] == '1':
            number_of_balls_seen += 1

        moves += number_of_balls_seen

    return answer

def min_operations(boxes):
    length_boxes = len(boxes)
    answer, moves, number_of_balls_seen = [0] * length_boxes, 0, 0
    answer = sum_moves(answer, boxes, range(length_boxes))
    return sum_moves(answer, boxes, reversed(range(length_boxes)))