// Runtime: O(N), N = number of nodes in the linked list
// Space: O(1)

function middleNode(linkedList) {
  let fast = linkedList;
  let slow = linkedList;

  while (fast && fast.next) {
    fast = fast.next.next;
    slow = slow.next;
  }

  return slow;
}
