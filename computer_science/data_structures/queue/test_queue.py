from queue import Queue

q = Queue()
q.enqueue(1)
q.enqueue(2)
q.enqueue(3)
q.enqueue(4)
q.enqueue(5)

for i in range(q.size()):
    print(q.items[i])

print(q.front())
print(q.back())

q.dequeue()
print(q.front())

q.dequeue()
print(q.size())

while not q.is_empty():
    print(q.front())
    q.dequeue()

print(q.size())
