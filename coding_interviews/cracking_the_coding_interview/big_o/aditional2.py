def power(a, b):
    if b < 0:
        return 0
    elif b == 0:
        return 1
    else:
        return a * power(a, b - 1)

print(power(2, 2))
print(power(2, 10))
print(power(3, 2))

# Complexity: O(B)
