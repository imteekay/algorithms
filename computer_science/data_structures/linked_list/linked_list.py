class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

    def get_data(self):
        return self.data

    def set_data(self, new_data):
        self.data = new_data

    def get_next(self):
        return self.next

    def set_next(self, new_next):
        self.next = new_next

class LinkedList:
    def __init__(self):
        self.head = None

    def is_empty(self):
        return self.head == None

    def add(self, data):
        new_node = Node(data)
        new_node.set_next(self.head)
        self.head = new_node

    def size(self):
        current_node = self.head
        count = 0

        while current_node != None:
            count += 1
            current_node = current_node.get_next()

        return count

    def search(self, item):
        found = False
        current_node = self.head

        while not found and current_node != None:
            if current_node.get_data() == item:
                found = True
            else:
                current_node = current_node.get_next()

        return found

    def remove(self, item):
        if self.head == None:
            print('List is empty')
            return

        found = False
        current_node = self.head
        previous_node = None

        while not found and current_node != None:
            if current_node.get_data() == item:
                found = True
            else:
                previous_node = current_node
                current_node = current_node.get_next()

        if previous_node == None:
            self.head = current_node.get_next()
        else:
            previous_node.set_next(current_node.get_next())
