from linked_list import Node

node = Node(9)
print(node)
print(node.get_data())
node.set_data(10)
print(node.get_data())

print("------------")

print(node.get_next())
other_node = Node(0)

node.set_next(other_node)
print(node.get_next())
print(node.get_next().get_data())
