class Node:
    def __init__(self, value):
        self.value = value
        self.left_child = None
        self.right_child = None

    def get(self):
        return self.value

    def set(self, new_value):
        self.value = new_value
