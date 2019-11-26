class Stack:
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items.append(item)

    def pop(self):
        if self.is_empty():
            return None

        return self.items.pop()

    def peek(self):
        return self.items[len(self.items)-1]

    def is_empty(self):
        return self.items == []

    def size(self):
        return len(self.items)


stack = Stack()

print(stack.is_empty())  # True

stack.push(1)

top = stack.peek()
print(top)  # 1

print(stack.is_empty())  # False

stack.push(2)
stack.push(3)
stack.push(4)
stack.push(5)

top = stack.peek()
print(top)  # 5

count = stack.size()
print(count)  # 5

print(stack.pop())  # 5
print(stack.pop())  # 4
print(stack.pop())  # 3
print(stack.pop())  # 2
print(stack.pop())  # 1
print(stack.pop())  # None
