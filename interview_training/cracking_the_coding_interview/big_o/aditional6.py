from math import sqrt

def square_root(n):
    for guess in range(int(sqrt(n))+1):
        if guess * guess == n:
            return guess

    return -1

print(square_root(100))
print(square_root(9))
print(square_root(25))
print(square_root(3))

# Complexity: O(log N) --> It is a binary search algorithm
