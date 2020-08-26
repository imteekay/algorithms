def min_operations(n):
    operations = 0

    for index in range(n // 2):
        operations += n - (2 * index + 1)

    return operations
