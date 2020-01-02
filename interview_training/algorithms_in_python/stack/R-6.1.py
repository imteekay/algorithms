# R-6.1 from the Algorithms in Pytho book
# What values are returned during the following series of stack operations,
# if executed upon an initially empty stack?
# push(5), push(3), pop(), push(2), push(8), pop(), pop(), push(9),
# push(1), pop(), push(7), push(6), pop(), pop(), push(4), pop(), pop().


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
stack.push(5)  # [5]
stack.push(3)  # [5, 3]
stack.pop()  # [5] (removed 3)
stack.push(2)  # [5, 2]
stack.push(8)  # [5, 2, 8]
stack.pop()  # [5, 2] (removed 8)
stack.pop()  # [5] (removed 2)
stack.push(9)  # [5, 9]
stack.push(1)  # [5, 9, 1]
stack.pop()  # [5, 9] (removed 1)
stack.push(7)  # [5, 9, 7]
stack.push(6)  # [5, 9, 7, 6]
stack.pop()  # [5, 9, 7] (removed 6)
stack.pop()  # [5, 9] (removed 7)
stack.push(4)  # [5, 9, 4]
stack.pop()  # [5, 9] (removed 4)
stack.pop()  # [5] (removed 9)
