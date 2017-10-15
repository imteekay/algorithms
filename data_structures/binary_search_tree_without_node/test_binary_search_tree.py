from binary_search_tree import *

bst = BinarySearchTree(15)

bst.insert_node(10)
bst.insert_node(8)
bst.insert_node(12)
bst.insert_node(20)
bst.insert_node(17)
bst.insert_node(25)
bst.insert_node(19)

print(bst.find_node(15))
print(bst.find_node(10))
print(bst.find_node(8))
print(bst.find_node(12))
print(bst.find_node(20))
print(bst.find_node(17))
print(bst.find_node(25))
print(bst.find_node(19))

print(bst.find_node(0))

print

bst.pre_order_traversal()
print
bst.in_order_traversal()
print
bst.post_order_traversal()
