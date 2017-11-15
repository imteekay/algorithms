def product(a, b):
    sum = 0
    for i in range(b):
        sum += a

    return sum

print(product(2, 4))

# Complexity: O(b) | O(N)
