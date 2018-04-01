# https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/

class ListNode(object):
    def __init__(self, value):
        self.val = value
        self.next = None

def remove_duplicates(head):
    if head is None:
        return

    current_node = head

    while current_node and current_node.next:
        if current_node.val == current_node.next.val:
            current_node.next = current_node.next.next
        else:
            current_node = current_node.next

    return head

# 1 -> 1 -> 2
print('1 -> 1 -> 2')
head = ListNode(1)
head.next = ListNode(1)
head.next.next = ListNode(2)
current_node = remove_duplicates(head)

while current_node:
    print(current_node.val)
    current_node = current_node.next

# 1 -> 1 -> 2 -> 3 -> 3
print('\n1 -> 1 -> 2 -> 3 -> 3')
head = ListNode(1)
head.next = ListNode(1)
head.next.next = ListNode(2)
head.next.next.next = ListNode(3)
head.next.next.next.next = ListNode(3)
current_node = remove_duplicates(head)

while current_node:
    print(current_node.val)
    current_node = current_node.next
