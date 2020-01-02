# What values are returned during the following sequence of queue operations,
# if executed on an initially empty queue? enqueue(5), enqueue(3), dequeue(),
# enqueue(2), enqueue(8), dequeue(), dequeue(), enqueue(9), enqueue(1), dequeue(),
# enqueue(7), enqueue(6), dequeue(), dequeue(), enqueue(4), dequeue(), dequeue().


class Emptiness(Exception):
    pass


class Queue:
    def __init__(self):
        self.items = []

    def enqueue(self, item):
        self.items.append(item)

    def dequeue(self):
        if self.is_empty():
            raise Emptiness('The Queue is empty')

        return self.items.pop(0)

    def is_empty(self):
        return self.size() == 0

    def front(self):
        if self.is_empty():
            raise Emptiness('The Queue is empty')

        return self.items[0]

    def back(self):
        if self.is_empty():
            raise Emptiness('The Queue is empty')

        return self.items[-1]

    def size(self):
        return len(self.items)


queue = Queue()
queue.enqueue(5)  # [5]
queue.enqueue(3)  # [5, 3]
queue.dequeue()  # [3]
queue.enqueue(2)  # [3, 2]
queue.enqueue(8)  # [3, 2, 8]
queue.dequeue()  # [2, 8]
queue.dequeue()  # [8]
queue.enqueue(9)  # [8, 9]
queue.enqueue(1)  # [8, 9, 1]
queue.dequeue()  # [9, 1]
queue.enqueue(7)  # [9, 1, 7]
queue.enqueue(6)  # [9, 1, 7, 6]
queue.dequeue()  # [1, 7, 6]
queue.dequeue()  # [7, 6]
queue.enqueue(4)  # [7, 6, 4]
queue.dequeue()  # [6, 4]
queue.dequeue()  # [4]
