from binary_tree import BinaryTree

tree = BinaryTree('a')
tree.insert_left('b')
tree.left_child.insert_right('d')
tree.insert_right('c')
tree.right_child.insert_left('e')
tree.right_child.insert_right('f')

a = tree.value
b = tree.left_child.value
c = tree.right_child.value
d = tree.left_child.right_child.value
e = tree.right_child.left_child.value
f = tree.right_child.right_child.value

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
