def sqrt(n):
    return sqrt_helper(n, 1, n)

def sqrt_helper(n, min, max):
    if min > max:
        return -1

    guess = (min + max) / 2

    if guess * guess > n:
        return sqrt_helper(n, min, guess - 1)
    elif guess * guess < n:
        return sqrt_helper(n, guess + 1, max)
    else:
        return guess

print(sqrt(100))
print(sqrt(9))
print(sqrt(25))
print(sqrt(3))

# Complexity: O(log N) --> It is a binary search algorithm
