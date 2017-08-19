# https://leetcode.com/problems/merge-two-sorted-lists/description/

class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

def merge_two_lists(l1, l2):
    if l1 == None and l2 == None:
        return l1
    elif l1 == None:
        return l2
    elif l2 == None:
        return l1
    else:
        n = root = ListNode(0)

        while l1 and l2:
            if l1.val <= l2.val:
                n.next = l1
                l1 = l1.next
            else:
                n.next = l2
                l2 = l2.next

            n = n.next

        if l1:
            n.next = l1

        if l2:
            n.next = l2

        return root.next
