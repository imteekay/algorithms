# R-6.4 from the Algorithms in Pytho book
# Give a recursive method for removing all the elements from a stack.


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


def remove_all(stack):
    if stack.is_empty():
        return stack

    stack.pop()

    return remove_all(stack)


stack = Stack()
stack.push(1)
stack.push(2)
stack.push(3)
stack.push(4)
stack.push(5)

new_stack = remove_all(stack)
print(new_stack.items)  # []
