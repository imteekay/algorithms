from binary_tree import BinaryTree

a_node = BinaryTree('a')
a_node.insert_left('b')
a_node.insert_right('c')

b_node = a_node.left_child
b_node.insert_right('d')

c_node = a_node.right_child
c_node.insert_left('e')
c_node.insert_right('f')

d_node = b_node.right_child
e_node = c_node.left_child
f_node = c_node.right_child

a = a_node.value
b = b_node.value
c = c_node.value
d = d_node.value
e = e_node.value
f = f_node.value

print
print('---------------------------------------')
print
print("               |%s|" %(a))
print("             /     \\")
print("           |%s|     |%s|" %(b, c))
print("              \\   /   \\")
print("             |%s| |%s| |%s|" %(d, e, f))

# ------- Building this Tree -------
#
#               |a|
#             /    \
#          |b|     |c|
#           \     /  \
#           |d| |e|  |f|

print
print('---------------------------------------')
print

tree = a_node

print('Depth First: Pre Order')
print
tree.pre_order()
print

print('Depth First: Post Order')
print
tree.post_order()
print

print('Depth First: In Order')
print
tree.in_order()
print

print('Breadth First Search')
print
tree.bfs()
print
