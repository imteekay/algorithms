from tree import BinaryTree

tree = BinaryTree('a')
tree.insert_left('b')
tree.get_left_child().insert_right('d')
tree.insert_right('c')
tree.get_right_child().insert_left('e')
tree.get_right_child().insert_right('f')

a = tree.get_root_value()
b = tree.get_left_child().get_root_value()
c = tree.get_right_child().get_root_value()
d = tree.get_left_child().get_right_child().get_root_value()
e = tree.get_right_child().get_left_child().get_root_value()
f = tree.get_right_child().get_right_child().get_root_value()

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
