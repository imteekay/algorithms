// Runtime: O(N), N = number of nodes in the linked list
// Space: O(1)

function middleNode(linkedList) {
  let length = 0;
  let node = linkedList;

  while (linkedList) {
    linkedList = linkedList.next;
    length++;
  }

  let middle = Math.floor(length / 2);
  let index = 0;

  while (node) {
    if (index === middle) {
      return node;
    }

    node = node.next;
    index++;
  }
}
