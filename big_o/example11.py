def factorial(n):
    if n < 0:
        return -1

    if n == 0:
        return 1

    return n * factorial(n - 1)

# factorial function has a complexity of O(N)
