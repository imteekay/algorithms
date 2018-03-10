class Node:
    def __init__(self, value):
        self.value = value
        self.left_child = None
        self.right_child = None

class BinarySearchTree:
    def __init__(self):
        self.root = None

    def insert(self, value):
        if self.root:
            self.insert_node(self.root, value)
        else:
            self.root = Node(value)

    def insert_node(self, current_node, value):
        if value <= current_node.value and current_node.left_child:
            self.insert_node(current_node.left_child, value)
        elif value <= current_node.value:
            current_node.left_child = Node(value)
        elif current_node.right_child:
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

    def pre_order(self):
        if self.root:
            self.pre_order_traversal(self.root)
        else:
            print('Tree empty')

    def pre_order_traversal(self, current_node):
        print(current_node.value)

        if current_node.left_child:
            self.pre_order_traversal(current_node.left_child)

        if current_node.right_child:
            self.pre_order_traversal(current_node.right_child)

    def in_order(self):
        if self.root:
            self.in_order_traversal(self.root)
        else:
            print('Tree empty')

    def in_order_traversal(self, current_node):
        if current_node.left_child:
            self.in_order_traversal(current_node.left_child)

        print(current_node.value)

        if current_node.right_child:
            self.in_order_traversal(current_node.right_child)

    def post_order(self):
        if self.root:
            self.post_order_traversal(self.root)
        else:
            print('Tree empty')

    def post_order_traversal(self, current_node):
        if current_node.left_child:
            self.post_order_traversal(current_node.left_child)

        if current_node.right_child:
            self.post_order_traversal(current_node.right_child)

        print(current_node.value)
