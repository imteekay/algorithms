export class ListNode {
  constructor(val, next) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}

export function mergeNodes(head) {
  let nonZeroHead;
  let node;
  let nextNode;
  let currentNode = head.next;
  let valueSum = 0;
  let gotFirstNode = false;

  while (currentNode) {
    valueSum += currentNode.val;

    if (currentNode.val === 0) {
      nextNode = new ListNode(valueSum);
      valueSum = 0;

      if (gotFirstNode) {
        node.next = nextNode;
        node = node.next;
      } else {
        node = nextNode;
        nonZeroHead = nextNode;
        gotFirstNode = true;
      }
    }

    currentNode = currentNode.next;
  }

  return nonZeroHead;
}
