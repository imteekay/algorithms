def diagonal_sort(mat):
    for column in range(len(mat[0]) - 1):
        diagonal_list = []
        col = column

        for row in range(len(mat)):
            diagonal_list.append(mat[row][col])
            col += 1

            if col >= len(mat[0]):
                break

        diagonal_list = sorted(diagonal_list)
        col = column

        for row in range(len(mat)):
            mat[row][col] = diagonal_list[row]
            col += 1

            if col >= len(mat[0]):
                break

    for row in range(1, len(mat)):
        diagonal_list = []
        r = row

        for column in range(len(mat[0])):
            diagonal_list.append(mat[r][column])
            r += 1

            if r >= len(mat):
                break

        diagonal_list = sorted(diagonal_list)
        r = row

        for column in range(len(mat[0])):
            mat[r][column] = diagonal_list[column]
            r += 1

            if r >= len(mat):
                break

    return mat
