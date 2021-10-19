# Use this class to create linked lists.
class Node:
    def __init__(self, value, next=None):
        self.value = value
        self.next = next

    def __str__(self):
        return str(self.value)

def nth_from_last(head, n):
    if head is None or n < 0:
        return

    elements = []
    current_node = head

    while current_node:
        elements.append(current_node.value)
        current_node = current_node.next

    if n > len(elements):
        return None
    else:
        return elements[len(elements) - n]

# Testing Linked List function
def linked_list_to_string(head):
    current = head
    str_list = []

    while current:
        str_list.append(str(current.value))
        current = current.next

    return ' -> '.join(str_list.append('(None)'))

current = Node(1)
for i in range(2, 8):
    current = Node(i, current)
head = current
# head = 7 -> 6 -> 5 -> 4 -> 3 -> 2 -> 1 -> (None)

current2 = Node(4)
for i in range(3, 0, -1):
    current2 = Node(i, current2)
head2 = current2
# head2 = 1 -> 2 -> 3 -> 4 -> (None)

print('nth_from_last(head, 1) should return 1.')
print(nth_from_last(head, 1))
print('nth_from_last(head, 5) should return 5.')
print(nth_from_last(head, 5))
print('nth_from_last(head2, 2) should return 3.')
print(nth_from_last(head2, 2))
print('nth_from_last(head2, 4) should return 1.')
print(nth_from_last(head2, 4))
print('nth_from_last(head2, 5) should return None.')
print(nth_from_last(head2, 5))
print('nth_from_last(None, 1) should return None.')
print(nth_from_last(None, 1))
