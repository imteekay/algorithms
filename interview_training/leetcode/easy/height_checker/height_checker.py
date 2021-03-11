# https://leetcode.com/problems/height-checker

def height_checker(heights):
    sorted_heights, counter = sorted(heights), 0
    
    for index in range(len(heights)):
        if heights[index] != sorted_heights[index]:
            counter += 1
            
    return counter