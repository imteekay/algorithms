from collections import deque

q = deque()
q.append(1)
q.append(2)
q.append(3)

print(q)

print(q.pop())
print(q.pop())
print(q.pop())

q.pop()
