# Fibonacci Sequence: 0 1 1 2 3 5 8 13 ...

def fibonacci(num):
    if num == 1:
        return 0

    if num == 2:
        return 1

    return fibonacci(num-1) + fibonacci(num-2)


print(fibonacci(1))
print(fibonacci(2))
print(fibonacci(3))
print(fibonacci(4))
print(fibonacci(5))
