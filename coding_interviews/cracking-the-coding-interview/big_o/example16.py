def powers_of_2(n):
    if n <= 0:
        return 0

    if n == 1:
        print(1)
        return 1

    previous = powers_of_2(n / 2)
    current = previous * 2
    print(current)
    return current

powers_of_2(4)

# Complexity: O(log N)
