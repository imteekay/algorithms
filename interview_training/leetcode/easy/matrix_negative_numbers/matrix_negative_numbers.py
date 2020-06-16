def count_negatives(grid):
    counter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] < 0:
                counter += 1

    return counter
