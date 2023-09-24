def mod(a, b):
    if b > a:
        return a

    return mod(a - b, b)

print(mod(10, 2))
print(mod(10, 3))
print(mod(10, 4))
print(mod(10, 5))
print(mod(10, 6))

# Complexity: O(a / b)

def mod(a, b):
    if b <= 0:
        return -1

    div = a / b
    return a - div * b

# Complexity: O(1)
