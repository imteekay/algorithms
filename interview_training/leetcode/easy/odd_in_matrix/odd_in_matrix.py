def init_matrix(rows, columns):
    return [[0 for _ in range(columns)] for _ in range(rows)]


def odd_cells(n, m, indices):
    matrix = init_matrix(n, m)

    for [ri, ci] in indices:
        for column in range(m):
            matrix[ri][column] += 1

        for row in range(n):
            matrix[row][ci] += 1

    odds = 0

    for row in range(n):
        for column in range(m):
            if matrix[row][column] % 2 != 0:
                odds += 1

    return odds
