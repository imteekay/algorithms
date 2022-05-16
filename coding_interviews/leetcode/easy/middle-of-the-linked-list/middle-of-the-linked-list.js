/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
head = [1,2,3,4,5] => n = 5 => 5 / 2 => 2.5 => 2
[3,4,5]

head = [1] => n = 1 => 1 / 2 => 0.5 => 0
[1]

head = [1,2,3,4,5,6] => n = 6 => 6 / 2 => 3
[4,5,6]
*/

function getNodeCount(node, count) {
  return node ? getNodeCount(node.next, count + 1) : count;
}

function getNode(node, index) {
  return index ? getNode(node.next, index - 1) : node;
}

function middleNode(head) {
  let count = getNodeCount(head, 0);
  let middleIndex = Math.floor(count / 2);
  return getNode(head, middleIndex);
}
