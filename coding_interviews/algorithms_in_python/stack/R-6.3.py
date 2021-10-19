# R-6.3 from the Algorithms in Pytho book
# Implement a function with signature transfer(S, T) that transfers all elements
# from stack S onto stack T, so that the element that starts at the top of S is
# the first to be inserted onto T, and the element at the bottom of S ends up at the top of T.


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


def transfer(S, T):
    while not S.is_empty():
        popped_item = S.pop()
        T.push(popped_item)

    return T


S = Stack()
T = Stack()

S.push(1)
S.push(2)
S.push(3)
S.push(4)
S.push(5)

new_T = transfer(S, T)

print(new_T.items)  # [5, 4, 3, 2, 1]
