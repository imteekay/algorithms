class Node:
    def __init__(self, value):
        self.value = value
        self.left_child = None
        self.right_child = None

    def get(self):
        return self.value

    def set(self, new_value):
        self.value = new_value

class BinarySearchTree:
    def __init__(self):
        self.root = None

    def insert(self, value):
        if self.root == None:
            self.__set_root(value)
        else:
            self.insert_node(self.root, value)

    def insert_node(self, current_node, value):
        if value <= current_node.value and current_node.left_child:
            self.insert_node(current_node.left_child, value)
        elif value <= current_node.value:
            current_node.left_child = Node(value)
        elif value > current_node.value and current_node.right_child:
            self.insert_node(current_node.right_child, value)
        else:
            current_node.right_child = Node(value)

    def find(self, value):
        return self.find_node(self.root, value)

    def find_node(self, current_node, value):
        if value < current_node.value and current_node.left_child:
            return self.find_node(current_node.left_child, value)
        if value > current_node.value and current_node.right_child:
            return self.find_node(current_node.right_child, value)

        return value == current_node.value

    def __set_root(self, value):
        self.root = Node(value)
