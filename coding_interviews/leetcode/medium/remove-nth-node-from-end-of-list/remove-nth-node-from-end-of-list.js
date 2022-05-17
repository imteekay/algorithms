/**
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */

function countNodes(head) {
  let count = 0;

  while (head) {
    count++;
    head = head.next;
  }

  return count;
}

function removeNthFromEnd(head, n) {
  let count = countNodes(head);
  let nth = count - n;
  let node = head;

  if (nth === 0) {
    head = head.next;
    return head;
  }

  while (node) {
    if (nth === 1) {
      node.next = node.next.next;
    }

    nth--;
    node = node.next;
  }

  return head;
}
