def sum_zero(n):
    zero_sum_array = []
    counter = 1

    if n % 2 != 0:
        zero_sum_array.append(0)
        n -= 1

    while n:
        zero_sum_array.append(counter)
        zero_sum_array.append(-counter)
        counter += 1
        n -= 2

    return zero_sum_array
