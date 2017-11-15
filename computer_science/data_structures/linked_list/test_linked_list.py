from linked_list import *

print('--- Instantiate Linked List ---')
linked_list = LinkedList()
print(linked_list)

print('--- Adding & Size ---')
linked_list.add(10)
linked_list.add(9)
linked_list.add(8)
print(linked_list.size())

print('--- Searching ---')
print(linked_list.search(10))
print(linked_list.search(0))

print('--- Removing ---')
print("Size: %i" %(linked_list.size()))
print("Searching for 10 - Found: %r" %(linked_list.search(10)))
print('Removing 10')
linked_list.remove(10)
print("Size: %i" %(linked_list.size()))
print("Searching for 10 - Found: %r" %(linked_list.search(10)))
print('Removing 9 and 8')
linked_list.remove(9)
linked_list.remove(8)
print("Size: %i" %(linked_list.size()))
print('Trying to remove item from empty list')
linked_list.remove(0)
