# R-6.5 from the Algorithms in Pytho book
# Implement a function that reverses a list of elements by pushing them onto
# a stack in one order, and writing them back to the list in reversed order.


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


def reverse(items):
    stack = Stack()

    for item in items:
        stack.push(item)

    new_items = []

    while not stack.is_empty():
        popped_item = stack.pop()
        new_items.append(popped_item)

    return new_items


items = [1, 2, 3, 4, 5]

new_items = reverse(items)
print(new_items)
