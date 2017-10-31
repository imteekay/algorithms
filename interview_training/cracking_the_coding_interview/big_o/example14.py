def all_fib(n):
    for i in range(n):
        print(fib(i))

def fib(n):
    if n == 0:
        return 0

    if n == 1:
        return 1

    return fib(n - 1) + fib(n - 2)

all_fib(10)

# Complexity: O(2 ^ (n+1))
