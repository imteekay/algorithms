// Runtime: O(N), N = number of nodes in the linked list
// Space: O(1)

function removeDuplicatesFromLinkedList(linkedList) {
  let head = linkedList;
  while (linkedList) {
    let next = linkedList.next;
    while (next && linkedList.value === next.value) {
      next = next.next;
    }
    linkedList.next = next;
    linkedList = next;
  }
  return head;
}
