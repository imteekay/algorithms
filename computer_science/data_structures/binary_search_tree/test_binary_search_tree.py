from binary_search_tree import *

bst = BinarySearchTree()

bst.insert(15)
bst.insert(10)
bst.insert(8)
bst.insert(12)
bst.insert(20)
bst.insert(17)
bst.insert(25)
bst.insert(19)

print(bst.find(15))
print(bst.find(10))
print(bst.find(8))
print(bst.find(12))
print(bst.find(20))
print(bst.find(17))
print(bst.find(25))
print(bst.find(19))

print(bst.find(0))

print

bst.pre_order()
print
bst.in_order()
print
bst.post_order()
