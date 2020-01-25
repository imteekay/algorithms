'''
Given the root to a binary tree, implement serialize(root),
which serializes the tree into a string, and deserialize(s),
which deserializes the string back into the tree.

For example, given the following Node class

class Node:
    def __init__(self, val, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

The following test should pass:

node = Node('root', Node('left', Node('left.left')), Node('right'))
assert deserialize(serialize(node)).left.left.val == 'left.left'

serialize --> 'root' 'left' 'left.left' 'right'
deserialize --> Node('root', Node('left', Node('left.left')), Node('right'))
'''

from queue import Queue


class Node:
    def __init__(self, val, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def serialize(node):
    if node is None:
        return 'X '

    return node.val + ' ' + serialize(node.left) + serialize(node.right)


def deserialize_node(nodes):
    value = nodes.get()

    if value == 'X':
        return None

    node = Node(value)
    node.left = deserialize_node(nodes)
    node.right = deserialize_node(nodes)
    return node


def create_nodes_queue(string):
    nodes = string.split(' ')
    queue = Queue()

    for node in nodes:
        queue.put(node)

    return queue


def deserialize(string):
    string = string.strip()
    nodes = create_nodes_queue(string)
    return deserialize_node(nodes)


def pre_order(tree):
    if tree is None:
        return

    print(tree.val)
    pre_order(tree.left)
    pre_order(tree.right)


node = Node('root', Node('left', Node('left.left')), Node('right'))

serialized_node = serialize(node)
print(serialized_node)

tree = deserialize(serialized_node)
print(pre_order(tree))
