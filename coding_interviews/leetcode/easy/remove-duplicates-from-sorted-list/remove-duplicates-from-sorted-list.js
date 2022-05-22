function deleteDuplicates(head) {
  if (!head || !head.next) {
    return head;
  }

  let current = head;
  let next = current.next;

  while (next) {
    if (current.val === next.val) {
      next = next.next;
      current.next = next;
    } else {
      current = next;
      next = next.next;
    }
  }

  return head;
}
