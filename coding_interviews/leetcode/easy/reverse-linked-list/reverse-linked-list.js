function reverseList(head) {
  if (!head) {
    return head;
  }

  let firstNode = head;
  let secondNode = head.next;
  let auxiliaryNode = null;
  let previousNode = null;

  while (secondNode) {
    auxiliaryNode = secondNode.next;
    secondNode.next = firstNode;
    firstNode.next = previousNode;
    previousNode = firstNode;
    firstNode = secondNode;
    secondNode = auxiliaryNode;
  }

  return firstNode;
}

function reverseListSimpler(head) {
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
