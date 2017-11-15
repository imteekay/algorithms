from math import sqrt

def is_prime(num):
    if num < 2:
        return False

    if num == 2:
        return True

    if num % 2 == 0:
        return False

    for i in range(3, int(sqrt(num)) + 1, 2):
        if num % i == 0:
            return False

    return True

print(is_prime(1)) # False
print(is_prime(2)) # True
print(is_prime(9)) # False
print(is_prime(17)) # True
print(is_prime(24)) # False

# is prime function has complexity of O(sqrt(N))
