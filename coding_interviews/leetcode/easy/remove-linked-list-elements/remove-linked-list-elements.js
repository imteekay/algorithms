function removeElements(head, val) {
  if (!head) return head;

  while (head && head.val === val) {
    head = head.next;
  }

  if (!head) return head;

  let previous = head;
  let current = head.next;

  while (current) {
    if (current.val === val) {
      previous.next = current.next;
      current = previous.next;
    } else {
      previous = previous.next;
      current = current.next;
    }
  }

  return head;
}
