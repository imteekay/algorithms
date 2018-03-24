# [[0, 0], [0, 1]], 3, 4
# => [
#     [-1, -1, 1, 0],
#     [2, 2, 1, 0],
#     [0, 0, 0, 0]
#   ]

def update_table_spot(table, row, col, num_rows, num_cols):
    table_with_border = table
    border = []

    for row in range(num_rows):
        table_with_border[row].insert(0, 0)
        table_with_border[row].insert(num_cols+1, 0)

    for i in range(num_cols+2):
        border.append(0)

    table_with_border.insert(0, border)
    table_with_border.insert(num_rows+1, border)

    number_of_bomb_neighboors = 0

    for i in range(num_rows):
        for j in range(num_cols):
            print(table[i][j], end='')

        print()
    print()

    if table_with_border[row-1][col-1] == -1: number_of_bomb_neighboors += 1
    if table_with_border[row-1][col] == -1: number_of_bomb_neighboors += 1
    if table_with_border[row-1][col+1] == -1: number_of_bomb_neighboors += 1
    if table_with_border[row][col-1] == -1: number_of_bomb_neighboors += 1
    if table_with_border[row][col+1] == -1: number_of_bomb_neighboors += 1
    if table_with_border[row+1][col-1] == -1: number_of_bomb_neighboors += 1
    if table_with_border[row+1][col] == -1: number_of_bomb_neighboors += 1
    if table_with_border[row+1][col+1] == -1: number_of_bomb_neighboors += 1

    table[row][col] = number_of_bomb_neighboors
    return table

def mine_swipper(bombs, num_rows, num_cols):
    table = []

    for row in range(num_rows):
        filled_row = []

        for col in range(num_cols):
            filled_row.append(0)

        table.append(filled_row)

    for bomb in bombs:
        table[bomb[0]][bomb[1]] = -1

    for row in range(num_rows):
        for col in range(num_cols):
            if table[row][col] == 0:
                table = update_table_spot(table, row, col, num_rows, num_cols)

    for i in range(num_rows):
        for j in range(num_cols):
            print(table[i][j], end='')

        print()

mine_swipper([[0, 0], [0, 1]], 3, 4)
