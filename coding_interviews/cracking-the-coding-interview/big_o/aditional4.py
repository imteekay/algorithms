def div(a, b):
    count = 0
    sum = b

    while sum <= a:
        sum += b
        count += 1

    return count

print(div(10, 5))
print(div(10, 2))
print(div(10, 3))
print(div(10, 11))

# Complexity: O(a / b)
