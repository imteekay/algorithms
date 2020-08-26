def min_operations(n):
    numbers = []
    sum = 0

    for i in range(n):
        num = 2 * i + 1
        numbers.append(num)
        sum += num

    medium = sum // n
    operations = 0

    for index in range(n // 2):
        operations += (medium - numbers[index])

    return operations
