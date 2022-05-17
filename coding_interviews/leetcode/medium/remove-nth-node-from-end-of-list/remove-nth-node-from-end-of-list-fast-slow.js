function removeNthFromEnd(head, n) {
  fast = head;
  slow = head;

  while (n) {
    fast = fast.next;
    n--;
  }

  if (!fast) {
    return head.next;
  }

  while (fast.next) {
    fast = fast.next;
    slow = slow.next;
  }

  slow.next = slow.next.next;

  return head;
}
