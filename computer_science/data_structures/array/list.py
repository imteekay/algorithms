a = [1, 2, 3, 4, 5]
print(a)

a.append(6) # O(1)
print(a)

a.append('hello')
print(a)

a.append([1, 2])
print(a)

a.pop() # O(1)
print(a)

a.pop()
print(a)

print(a[0])
print(a[3])

a[2] = 33

# in place sorting: O(N log N)
a.sort()
print(a)

# in place reverse: O(N)
a.reverse()
print(a)
