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
