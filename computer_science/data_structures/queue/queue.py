# Queue Big O complexity

# Enqueue (push): O(1) - Constant Time
# Dequeue (remove): O(1) - Constant Time
# Front: O(1) - Constant Time
# Back: O(1) - Constant Time
# Is Empty: O(1) - Constant Time
# Size: O(1) - Constant Time


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

        return self.items[self.size() - 1]

    def size(self):
        return len(self.items)


def test_enqueue(queue, item):
    queue.enqueue(item)
    print(queue.items)


def test_dequeue(queue):
    queue.dequeue()
    print(queue.items)


def test_emptiness(queue):
    is_empty = queue.is_empty()
    print(is_empty)


def test_size(queue):
    size = queue.size()
    print(size)


def test_front(queue):
    front = queue.front()
    print(front)


def test_back(queue):
    back = queue.back()
    print(back)


queue = Queue()

test_emptiness(queue)  # True
test_size(queue)  # 0

test_enqueue(queue, 1)  # [1]
test_enqueue(queue, 2)  # [1, 2]
test_enqueue(queue, 3)  # [1, 2, 3]
test_enqueue(queue, 4)  # [1, 2, 3, 4]
test_enqueue(queue, 5)  # [1, 2, 3, 4, 5]

test_emptiness(queue)  # False
test_size(queue)  # 5
test_front(queue)  # 1
test_back(queue)  # 5

test_dequeue(queue)  # [2, 3, 4, 5]
test_dequeue(queue)  # [3, 4, 5]
test_dequeue(queue)  # [4, 5]
test_dequeue(queue)  # [5]

test_emptiness(queue)  # False
test_size(queue)  # 1
test_front(queue)  # 5
test_back(queue)  # 5

test_dequeue(queue)  # []

test_emptiness(queue)  # True
test_size(queue)  # 0
