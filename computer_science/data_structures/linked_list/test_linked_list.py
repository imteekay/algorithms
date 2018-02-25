from linked_list import *

print('--- Instantiate Linked List ---')
linked_list = LinkedList()
print(linked_list)

print('--- Push Front & Size ---')
linked_list.push_front(10)
linked_list.push_front(9)
linked_list.push_front(8)
print("Current size: %i" %(linked_list.size()))

print('--- Push Back ---')
linked_list.push_back(11)
print("Current size: %i" %(linked_list.size()))

print('--- Printing all nodes data ---')
current_node = linked_list.head
while current_node:
    print(current_node.data)
    current_node = current_node.next

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
print('Removing 9, 8, and 11')
linked_list.remove(9)
linked_list.remove(8)
linked_list.remove(11)
print("Size: %i" %(linked_list.size()))
print('Trying to remove item from empty list')
linked_list.remove(0)
