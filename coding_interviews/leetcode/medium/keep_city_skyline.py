# https://leetcode.com/problems/max-increase-to-keep-city-skyline/description/

# input: grid = [[3,0,8,4],[2,4,5,7],[9,2,6,3],[0,3,1,0]]
# output: 35

def build_top_or_bottom(grid):
    top_or_bottom = []

    for i in range(len(grid[0])):
        highest_building = 0

        for j in range(len(grid)):
            if grid[j][i] > highest_building:
                highest_building = grid[j][i]

        top_or_bottom.append(highest_building)

    return top_or_bottom

def build_left_or_right(grid):
    left_or_right = []

    for line in grid:
        highest_building = 0

        for building_height in line:
            if building_height > highest_building:
                highest_building = building_height

        left_or_right.append(highest_building)

    return left_or_right

def max_increase_keeping_skyline(grid):
    top_or_bottom = build_top_or_bottom(grid)
    left_or_right = build_left_or_right(grid)

    increased_number = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if left_or_right[i] < top_or_bottom[j]:
                increased_number += (left_or_right[i] - grid[i][j])
            else:
                increased_number += (top_or_bottom[j] - grid[i][j])

    return increased_number

print(max_increase_keeping_skyline([[3,0,8,4],[2,4,5,7],[9,2,6,3],[0,3,1,0]]))
