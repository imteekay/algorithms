# https://leetcode.com/problems/lucky-numbers-in-a-matrix

def lucky_numbers(matrix):
    all_lucky_numbers, all_mins = [], []
    
    for row in matrix:
        found_min, col_index = float('Inf'), -1
        
        for index, column in enumerate(row):
            if column < found_min:
                found_min = column
                col_index = index
        
        all_mins.append([found_min, col_index])
        
    for a_min in all_mins:
        [min_value, min_column] = a_min
        maximum = float('-Inf')
        
        for index in range(len(matrix)):
            num = matrix[index][min_column]
            maximum = max(num, maximum)
            
        if maximum == min_value:
            all_lucky_numbers.append(min_value)
            
    return all_lucky_numbers
