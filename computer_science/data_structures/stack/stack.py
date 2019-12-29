# Stack Big O complexity

# Push: O(1) - Constant Time
# Pop (remove): O(1) - Constant Time
# top (top): O(1) - Constant Time
# Is Empty: O(1) - Constant Time
# Size: O(1) - Constant Time


class Emptiness(Exception):
    pass


class Stack:
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items.append(item)

    def pop(self):
        if self.is_empty():
            raise Emptiness('The Stack is empty')

        return self.items.pop()

    def is_empty(self):
        return self.size() == 0

    def top(self):
        if self.is_empty():
            raise Emptiness('The Stack is empty')

        return self.items[-1]

    def size(self):
        return len(self.items)


stack = Stack()

print(stack.is_empty())

stack.push(1)
print(stack.items)
stack.push(2)
print(stack.items)
stack.push(3)
print(stack.items)
stack.push(4)
print(stack.items)
stack.push(5)
print(stack.items)

print(stack.is_empty())
print(stack.top())

print(stack.pop())
print(stack.pop())
print(stack.pop())
print(stack.pop())

print(stack.is_empty())

print(stack.pop())

print(stack.is_empty())

# reversing a list


def reverse(bookshelf):
    stack = Stack()

    for book in bookshelf:
        stack.push(book)

    reversed_bookshelf = []

    while not stack.is_empty():
        reversed_bookshelf.append(stack.pop())

    return reversed_bookshelf


bookshelf = [
    'Harry Potter',
    'Atomic Habits',
    'Leonardo da Vinci',
    'Sapiens',
    'Peak'
]

reversed_bookshelf = reverse(bookshelf)

print(reversed_bookshelf)
