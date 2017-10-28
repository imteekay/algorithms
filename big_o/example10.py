from math import sqrt

def is_prime(num):
    if num <= 2:
        return True

    for i in range(3, int(sqrt(num)) + 1, 2):
        if num % i == 0:
            return False

    return True

print(is_prime(9))
print(is_prime(17))
print(is_prime(24))

# is prime function has complexity of O(sqrt(N))
