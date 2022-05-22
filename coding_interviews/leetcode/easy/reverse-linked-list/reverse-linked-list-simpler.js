function reverseList(head) {
  let previous = null;
  let current = head;
  let next;

  while (current) {
    next = current.next;
    current.next = previous;
    previous = current;
    current = next;
  }

  return previous;
}
