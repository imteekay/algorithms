# https://leetcode.com/problems/add-two-numbers/description/

'''
(1, 2, 3) + (2, 3, 4) = (3, 5, 7)
(1, 2, 3) + (2, 9, 4) = (3, 1, 8)
'''

class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

def add_two_numbers(l1, l2):
    carry = False
    result_list = r_list = ListNode(0)

    while l1 or l2 or carry:
        if l1 and l2:
            value = l1.val + l2.val
            l1 = l1.next
            l2 = l2.next
        elif l1:
            value = l1.val
            l1 = l1.next
        elif l2:
            value = l2.val
            l2 = l2.next
        else:
            value = 0

        if carry:
            value += 1
            carry = False

        if value >= 10:
            value -= 10
            carry = True

        r_list.next = ListNode(value)
        r_list = r_list.next

    return result_list.next

# Test 1:

l1 = ListNode(1)
l1.next = ListNode(2)
l = l1.next
l.next = ListNode(3)

l2 = ListNode(2)
l2.next = ListNode(9)
l = l2.next
l.next = ListNode(4)

result_list = add_two_numbers(l1, l2)

while result_list:
    print result_list.val
    result_list = result_list.next

print "--------------------"

# Test 2:

l1 = ListNode(5)
l2 = ListNode(5)

result_list = add_two_numbers(l1, l2)

while result_list:
    print result_list.val
    result_list = result_list.next
